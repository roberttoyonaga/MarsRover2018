# microstrain_comm

* IMU driver for the Microstrain 3DM-GX3®-35.
* Converted to run on the ROS framework from LCM
* Original package got from https://github.com/ipab-slmc/pronto-distro
* Built with ROS indigo on Ubuntu 14.04 LTS

### Dependencies:
* GLIB2
* GTHREAD2
* libbot (already included)

### Parameters:
* `"verbose"`: default false, (if true packet bits are printed)
* `"debug"`: default false, (if true no messages are printed)
* `"com_port"`: default "", (custom serial port, default scans /dev/ttyACM*)
* `"rate"`: default "low", ("high"=1000hz, "medium"=500hz, "low"=100hz)
* `"init"`: default "yes", (do initialization, such as settiing data format etc)
