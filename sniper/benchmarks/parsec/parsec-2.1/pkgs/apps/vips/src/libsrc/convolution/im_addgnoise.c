/* @(#)  Add gaussian noise with mean 0 and variance sigma to image
 * @(#)   The noise is generated by averaging 12 random numbers
 * @(#)  page 78 PIETGEN 1989 n = 12
 * @(#)  Input image is any, output is float
 * @(#)  If running on SYSTEM V CONSTANT should be replaced by 2**15 - 1
 * @(#)   Usage
 * @(#) 
 * @(#) int im_addgnoise(imin, imout, sigma)
 * @(#) IMAGE *imin, *imout;
 * @(#) double sigma;
 * @(#)  Returns 0 on success and -1 on error
 * @(#)
 *
 * Copyright 1990, N. Dessipris.
 *
 * File written on 2/12/1986
 * Author : N. Dessipris
 * Updated : 22/01/1991
 * 1/2/95 JC
 *	- junked!
 *	- now uses partial im_gaussnoise() and partial im_add() to do the
 *	  same job
 & 1/5/01 JC
 *	- oops, failed for not-1-band images
 *
 * 2008-01-28 tcv:
 *      - now works (was broken)
 *      - no limit on bands
 */

/*

    This file is part of VIPS.
    
    VIPS is free software; you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

 */

/*

    These files are distributed with VIPS - http://www.vips.ecs.soton.ac.uk

 */


#ifdef HAVE_CONFIG_H
#include <config.h>
#endif /*HAVE_CONFIG_H*/
#include <vips/intl.h>

#include <vips/vips.h>

#ifdef WITH_DMALLOC
#include <dmalloc.h>
#endif /*WITH_DMALLOC*/

int
im_addgnoise( IMAGE *in, IMAGE *out, double sigma ){
#define FUNCTION_NAME "im_addgnoise"

  if( im_piocheck( in, out ))
    return -1;
  {
    int i;
    IMAGE **temps= IM_ARRAY( out, in-> Bands, IMAGE* );
    IMAGE *joined_temps= im_open_local( out, FUNCTION_NAME ": joined_temps", "p" );

    if( ! temps || ! joined_temps || im_open_local_array( out, temps, in-> Bands, FUNCTION_NAME ": temps", "p" ))
      return -1;

    for( i= 0; i < in-> Bands; ++i )
      if( im_gaussnoise( temps[i], in-> Xsize, in-> Ysize, 0.0, sigma ))
        return -1;

    return im_gbandjoin( temps, joined_temps, in-> Bands ) || im_add( in, joined_temps, out );
  }
#undef FUNCTION_NAME
}