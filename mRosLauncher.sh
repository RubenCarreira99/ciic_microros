#!/bin/sh

#argumento numerico de entrada inserido aquando a initializacao do .sh - numero de terminais para abrir
if [ $1 -gt 0 ]; then
  i=$1
fi

# conjunto de comandos para correr o agent
gnome-terminal -e "bash -c \"code ~/uros_tasks_ciic; sudo chmod 777 /dev/ttyUSB0; cd ~/microros_ws; source install/local_setup.bash; ros2 run micro_ros_agent micro_ros_agent udp4 -p 8888; exec bash\""

#conjunto de comandos para correr os terminais pretendidos ja com o source da isntalacao da mensagem custom 
while [ $i -gt 0 ]
do
   gnome-terminal -e "bash -c \"source ~/ciic/install/setup.bash; clear; exec bash\"" &
   i=$(($i - 1))
done
