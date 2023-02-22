#!/bin/bash
count=0 
while true 
do     
   if [ -e /dev/ttyACM0 ]; then     
       echo "Device ttyACM0 found!" && arduino-cli compile -b arduino:avr:micro -p /dev/ttyACM0 --upload && echo -e "\e[32;40mFirmware upload finished! \e[0m"
   echo "Unplug Arduino Micro and change a new one!"
   echo "Unplug Arduino Micro and change a new one!"
   echo "Unplug Arduino Micro and change a new one!"
   count=`expr $count + 1`
   echo -e "\e[34;40mTotal: $count\e[0m"
   else
   	echo -e "\e[34;40mTotal: $count\e[0m"
   fi
   sleep 5 
   echo -e "\e[31;40mNext...\e[0m"
   echo -e "\e[31;40m Waiting for Device Connecting ....\e[0m"
done 
