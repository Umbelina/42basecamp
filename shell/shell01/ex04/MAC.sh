ifconfig | grep 'ether' | awk -F' ' '{print $2 $17}'
