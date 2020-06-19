import sys
sys.argv = [ "/workspaces/sniper/scripts/periodic-stats.py", "1000:2000" ]
execfile("/workspaces/sniper/scripts/periodic-stats.py")
sys.argv = [ "/workspaces/sniper/scripts/markers.py", "markers" ]
execfile("/workspaces/sniper/scripts/markers.py")
