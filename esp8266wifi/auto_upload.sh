#!/bin/bash
count=0 
while true 
do     
   if [ -e /dev/ttyUSB0 ]; then     
       echo "Device ttyUSB0 found!" && arduino-cli compile -b esp8266:esp8266:nodemcu -p /dev/ttyUSB0 --upload && echo -e "\e[32;40mFirmware upload finished! \e[0m"
   echo "Unplug ESP8266 and change a new one!"
   echo "Unplug ESP8266 and change a new one!"
   echo "Unplug ESP8266 and change a new one!"
   count=`expr $count + 1`
   sleep 1 
   echo -e "\e[34;40mTotal: $count\e[0m"
   else
	   clear
   echo -e "\e[34;40mTotal: $count\e[0m"
   echo -e "\e[34;40m Waiting for Device ....\e[0m"
   sleep 1
   fi
done 
