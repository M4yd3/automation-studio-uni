SHELL := cmd.exe
CYGWIN=nontsec
export PATH := C:\Program Files (x86)\Common Files\Oracle\Java\javapath;C:\WINDOWS\system32;C:\WINDOWS;C:\WINDOWS\System32\Wbem;C:\WINDOWS\System32\WindowsPowerShell\v1.0\;C:\Program Files\NVIDIA Corporation\NVIDIA NvDLISR;C:\Program Files\Git\cmd;C:\Program Files (x86)\NVIDIA Corporation\PhysX\Common;D:\Soft\Python\Scripts\;D:\Soft\Python\;C:\Users\Mayde\AppData\Local\Microsoft\WindowsApps;D:\Soft\flutter\bin\;D:\Soft\AndroidSDK;C:\Users\Mayde\AppData\Local\Pub\Cache\bin;D:\Soft\protoc-3.20.1-win64\bin;C:\Program Files (x86)\Common Files\Hilscher GmbH\TLRDecode;D:\Soft\Python\Scripts\;D:\Soft\Python\;C:\Users\Mayde\AppData\Local\Microsoft\WindowsApps;D:\Soft\flutter\bin\;D:\Soft\AndroidSDK;C:\Users\Mayde\AppData\Local\Pub\Cache\bin;D:\Soft\protoc-3.20.1-win64\bin;C:\Program Files (x86)\Common Files\Hilscher GmbH\TLRDecode
export AS_BUILD_MODE := BuildAndTransfer
export AS_VERSION := 4.5.2.102
export AS_COMPANY_NAME :=  
export AS_USER_NAME := Mayde
export AS_PATH := D:/Soft/BR Automation Studio/AS45
export AS_BIN_PATH := D:/Soft/BR Automation Studio/AS45/bin-en
export AS_PROJECT_PATH := D:/Documents/Projects/automation-studio-uni/Prog_1
export AS_PROJECT_NAME := Prog_1
export AS_SYSTEM_PATH := D:/Soft/BR\ Automation\ Studio/AS/System
export AS_VC_PATH := D:/Soft/BR\ Automation\ Studio/AS45/AS/VC
export AS_TEMP_PATH := D:/Documents/Projects/automation-studio-uni/Prog_1/Temp
export AS_CONFIGURATION := Config1
export AS_BINARIES_PATH := D:/Documents/Projects/automation-studio-uni/Prog_1/Binaries
export AS_GNU_INST_PATH := D:/Soft/BR\ Automation\ Studio/AS45/AS/GnuInst/V4.1.2
export AS_GNU_BIN_PATH := $(AS_GNU_INST_PATH)/bin
export AS_GNU_INST_PATH_SUB_MAKE := D:/Soft/BR Automation Studio/AS45/AS/GnuInst/V4.1.2
export AS_GNU_BIN_PATH_SUB_MAKE := $(AS_GNU_INST_PATH_SUB_MAKE)/bin
export AS_INSTALL_PATH := D:/Soft/BR\ Automation\ Studio/AS45
export WIN32_AS_PATH := "D:\Soft\BR Automation Studio\AS45"
export WIN32_AS_BIN_PATH := "D:\Soft\BR Automation Studio\AS45\bin-en"
export WIN32_AS_PROJECT_PATH := "D:\Documents\Projects\automation-studio-uni\Prog_1"
export WIN32_AS_SYSTEM_PATH := "D:\Soft\BR Automation Studio\AS\System"
export WIN32_AS_VC_PATH := "D:\Soft\BR Automation Studio\AS45\AS\VC"
export WIN32_AS_TEMP_PATH := "D:\Documents\Projects\automation-studio-uni\Prog_1\Temp"
export WIN32_AS_BINARIES_PATH := "D:\Documents\Projects\automation-studio-uni\Prog_1\Binaries"
export WIN32_AS_GNU_INST_PATH := "D:\Soft\BR Automation Studio\AS45\AS\GnuInst\V4.1.2"
export WIN32_AS_GNU_BIN_PATH := "$(WIN32_AS_GNU_INST_PATH)\\bin" 
export WIN32_AS_INSTALL_PATH := "D:\Soft\BR Automation Studio\AS45"

.suffixes:

ProjectMakeFile:

	@'$(AS_BIN_PATH)/BR.AS.AnalyseProject.exe' '$(AS_PROJECT_PATH)/Prog_1.apj' -t '$(AS_TEMP_PATH)' -c '$(AS_CONFIGURATION)' -o '$(AS_BINARIES_PATH)'   -sfas -buildMode 'BuildAndTransfer'   

