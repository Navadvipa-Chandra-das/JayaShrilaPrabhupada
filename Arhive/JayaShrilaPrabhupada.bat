set now=%TIME:~0,-3%
set now=%now::=.%
set now=%now: =0%
set now=_%DATE:~-4%.%DATE:~3,2%.%DATE:~0,2%_%now%
"C:\PRG\7-Zip\7z.exe" -t7z -scsUTF-8 a JayaShrilaPrabhupada%now%.7z -ir@JayaShrilaPrabhupada.inc -xr@JayaShrilaPrabhupada.exc
copy JayaShrilaPrabhupada%now%.7z ..\..\NewNavadvipa\TOOLS\JayaShrilaPrabhupada.7z
