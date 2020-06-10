/*=========================================================================

  Program:   KWSys - Kitware System Library
  Module:    $RCSfile: CommandLineArguments.hxx.in,v $

  Copyright (c) Kitware, Inc., Insight Consortium.  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notices for more information.

=========================================================================*/
#ifndef cmsys_CommandLineArguments_hxx
#define cmsys_CommandLineArguments_hxx

#include <cmsys/Configure.h>
#include <cmsys/Configure.hxx>

#include <cmsys/stl/string>
#include <cmsys/stl/vector>

/* Define this macro temporarily to keep the code readable.  */
#if !defined (KWSYS_NAMESPACE) && !cmsys_NAME_IS_KWSYS
# define kwsys_stl cmsys_stl
#endif

namespace cmsys
{

class CommandLineArgumentsInternal;
struct CommandLineArgumentsCallbackStructure;

/** \class CommandLineArguments
 * \brief Command line arguments processing code.
 *
 * Find specified arguments with optional options and execute specified methods
 * or set given variables.
 *
 * The two interfaces it knows are callback based and variable based. For
 * callback based, you have to register callback for particular argument using
 * AddCallback method. When that argument is passed, the callback will be
 * called with argument, value, and call data. For boolean (NO_ARGUMENT)
 * arguments, the value is "1". If the callback returns 0 the argument parsing
 * will stop with an error.
 *
 * For the variable interface you associate variable with each argument. When
 * the argument is specified, the variable is set to the specified value casted
 * to the apropriate type. For boolean (NO_ARGUMENT), the value is "1".
 *
 * Both interfaces can be used at the same time. 
 *
 * Possible argument types are:
 *   NO_ARGUMENT     - The argument takes no value             : --A
 *   CONCAT_ARGUMENT - The argument takes value after no space : --Aval
 *   SPACE_ARGUMENT  - The argument takes value after space    : --A val 
 *   EQUAL_ARGUMENT  - The argument takes value after equal    : --A=val
 *   MULTI_ARGUMENT  - The argument takes values after space   : --A val1 val2 val3 ...
 *
 * Example use:
 *
 * kwsys::CommandLineArguments arg;
 * arg.Initialize(argc, argv);
 * typedef kwsys::CommandLineArguments argT;
 * arg.AddArgument("--something", argT::EQUAL_ARGUMENT, &some_variable, 
 *                 "This is help string for --something");
 * if ( !arg.Parse() )
 *   {
 *   kwsys_ios::cerr << "Problem parsing arguments" << kwsys_ios::endl;
 *   res = 1;
 *   }
 * 
 */

class cmsys_EXPORT CommandLineArguments
{
public:
  CommandLineArguments();
  ~CommandLineArguments();

  /**
   * Various argument types.
   */
  enum ArgumentTypeEnum { 
    NO_ARGUMENT,
    CONCAT_ARGUMENT,
    SPACE_ARGUMENT,
    EQUAL_ARGUMENT,
    MULTI_ARGUMENT
  };

  /**
   * Various variable types. When using the variable interface, this specifies
   * what type the variable is.
   */
  enum VariableTypeEnum {
    NO_VARIABLE_TYPE = 0, // The variable is not specified
    INT_TYPE,             // The variable is integer (int)
    BOOL_TYPE,            // The variable is boolean (bool)
    DOUBLE_TYPE,          // The variable is float (double)
    STRING_TYPE,          // The variable is string (char*)
    STL_STRING_TYPE,      // The variable is string (char*)
    VECTOR_INT_TYPE,             // The variable is integer (int)
    VECTOR_BOOL_TYPE,            // The vairable is boolean (bool)
    VECTOR_DOUBLE_TYPE,          // The variable is float (double)
    VECTOR_STRING_TYPE,          // The variable is string (char*)
    VECTOR_STL_STRING_TYPE,      // The variable is string (char*)
    LAST_VARIABLE_TYPE
  };

  /**
   * Prototypes for callbacks for callback interface.
   */
  typedef int(*CallbackType)(const char* argument, const char* value, 
    void* call_data);
  typedef int(*ErrorCallbackType)(const char* argument, void* client_data);

  /**
   * Initialize internal data structures. This should be called before parsing.
   */
  void Initialize(int argc, const char* const argv[]);
  void Initialize(int argc, char* argv[]);

  /**
   * Initialize internal data structure and pass arguments one by one. This is
   * convenience method for use from scripting languages where argc and argv
   * are not available.
   */
  void Initialize();
  void ProcessArgument(const char* arg);

  /**
   * This method will parse arguments and call apropriate methods. 
   */
  int Parse();

  /**
   * This method will add a callback for a specific argument. The arguments to
   * it are argument, argument type, callback method, and call data. The
   * argument help specifies the help string used with this option. The
   * callback and call_data can be skipped.
   */
  void AddCallback(const char* argument, ArgumentTypeEnum type, 
    CallbackType callback, void* call_data, const char* help);

  /**
   * Add handler for argument which is going to set the variable to the
   * specified value. If the argument is specified, the option is casted to the
   * apropriate type.
   */
  void AddArgument(const char* argument, ArgumentTypeEnum type,
    bool* variable, const char* help);
  void AddArgument(const char* argument, ArgumentTypeEnum type,
    int* variable, const char* help);
  void AddArgument(const char* argument, ArgumentTypeEnum type, 
    double* variable, const char* help);
  void AddArgument(const char* argument, ArgumentTypeEnum type, 
    char** variable, const char* help);
  void AddArgument(const char* argument, ArgumentTypeEnum type,
    kwsys_stl::string* variable, const char* help);

  /**
   * Add handler for argument which is going to set the variable to the
   * specified value. If the argument is specified, the option is casted to the
   * apropriate type. This will handle the multi argument values.
   */
  void AddArgument(const char* argument, ArgumentTypeEnum type,
    kwsys_stl::vector<bool>* variable, const char* help);
  void AddArgument(const char* argument, ArgumentTypeEnum type,
    kwsys_stl::vector<int>* variable, const char* help);
  void AddArgument(const char* argument, ArgumentTypeEnum type, 
    kwsys_stl::vector<double>* variable, const char* help);
  void AddArgument(const char* argument, ArgumentTypeEnum type, 
    kwsys_stl::vector<char*>* variable, const char* help);
  void AddArgument(const char* argument, ArgumentTypeEnum type,
    kwsys_stl::vector<kwsys_stl::string>* variable, const char* help);

  /**
   * Add handler for boolean argument. The argument does not take any option
   * and if it is specified, the value of the variable is true/1, otherwise it
   * is false/0.
   */
  void AddBooleanArgument(const char* argument,
    bool* variable, const char* help);
  void AddBooleanArgument(const char* argument,
    int* variable, const char* help);
  void AddBooleanArgument(const char* argument,
    double* variable, const char* help);
  void AddBooleanArgument(const char* argument,
    char** variable, const char* help);
  void AddBooleanArgument(const char* argument,
    kwsys_stl::string* variable, const char* help);

  /**
   * Set the callbacks for error handling.
   */
  void SetClientData(void* client_data);
  void SetUnknownArgumentCallback(ErrorCallbackType callback);

  /**
   * Get remaining arguments. It allocates space for argv, so you have to call
   * delete[] on it.
   */
  void GetRemainingArguments(int* argc, char*** argv);
  void DeleteRemainingArguments(int argc, char*** argv);

  /**
   * If StoreUnusedArguments is set to true, then all unknown arguments will be
   * stored and the user can access the modified argc, argv without known
   * arguments.
   */
  void StoreUnusedArguments(bool val) { this->StoreUnusedArgumentsFlag = val; }
  void GetUnusedArguments(int* argc, char*** argv);

  /**
   * Return string containing help. If the argument is specified, only return
   * help for that argument.
   */
  const char* GetHelp() { return this->Help.c_str(); }
  const char* GetHelp(const char* arg);

  /**
   * Get / Set the help line length. This length is used when generating the
   * help page. Default length is 80.
   */
  void SetLineLength(unsigned int);
  unsigned int GetLineLength();

  /**
   * Get the executable name (argv0). This is only available when using
   * Initialize with argc/argv.
   */
  const char* GetArgv0();

  /**
   * Get index of the last argument parsed. This is the last argument that was
   * parsed ok in the original argc/argv list.
   */
  unsigned int GetLastArgument();

protected:
  void GenerateHelp();

  //! This is internal method that registers variable with argument
  void AddArgument(const char* argument, ArgumentTypeEnum type,
    VariableTypeEnum vtype, void* variable, const char* help);

  bool GetMatchedArguments(kwsys_stl::vector<kwsys_stl::string>* matches,
    const kwsys_stl::string& arg);

  //! Populate individual variables
  bool PopulateVariable(CommandLineArgumentsCallbackStructure* cs,
    const char* value);

  //! Populate individual variables of type ...
  void PopulateVariable(bool* variable, const kwsys_stl::string& value);
  void PopulateVariable(int* variable, const kwsys_stl::string& value);
  void PopulateVariable(double* variable, const kwsys_stl::string& value);
  void PopulateVariable(char** variable, const kwsys_stl::string& value);
  void PopulateVariable(kwsys_stl::string* variable, const kwsys_stl::string& value);
  void PopulateVariable(kwsys_stl::vector<bool>* variable, const kwsys_stl::string& value);
  void PopulateVariable(kwsys_stl::vector<int>* variable, const kwsys_stl::string& value);
  void PopulateVariable(kwsys_stl::vector<double>* variable, const kwsys_stl::string& value);
  void PopulateVariable(kwsys_stl::vector<char*>* variable, const kwsys_stl::string& value);
  void PopulateVariable(kwsys_stl::vector<kwsys_stl::string>* variable, const kwsys_stl::string& value);

  typedef CommandLineArgumentsInternal Internal;
  Internal* Internals;
  kwsys_stl::string Help;

  unsigned int LineLength;

  bool StoreUnusedArgumentsFlag;
};

} // namespace cmsys

/* Undefine temporary macro.  */
#if !defined (KWSYS_NAMESPACE) && !cmsys_NAME_IS_KWSYS
# undef kwsys_stl
#endif

#endif




