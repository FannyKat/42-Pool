ldapsearch -xLLL "(uid=z*)" cn | grep ^cn | cut -c 5- | sort -d -f -r
