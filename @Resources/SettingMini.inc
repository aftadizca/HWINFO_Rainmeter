[Variables]
TextFont=mononoki NF

;CPU
CPUInst=0x0
CPUMemoryID=0xf0000301
CPUMemoryEntry=0x8000003

CPUClockID=0xf0000300
CPUClockEntry=0x600001c

CPULoadID=0xf0000300
CPULoadEntry=0x700000d

CPUTempID=0xf0000501
CPUTempEntry=0x1000000

CPUPowerID=0xf0000501
CPUPowerEntry=0x5000000

;Fan
FanID=0xf7067790
FanIns=0x0
FanCPU=0x3000001
FanWP=0x3000002
FanChassis1=0x3000000
FanChassis2=0x3000003
FanChassis3=0x3000004

;GPU
GPUID=0xe0001800
GPUIns=0x0
GPUTempEdge=0x1000000
GPUTempCenter=0x100000a
GPUFan=0x8000000
GPUPower=0x5000009
GPUCoreClock=0x6000000
GPUMemoryClock=0x6000004
GPULoad=0x7000000
GPUMemory=0x8000001
GPUFPS=0x8000032

;Colors
LabelColor=250,250,250
ValueColor=255,255,255
FrameColor=255,0,0,255
Accent=118,211,0,255
Warn=255,0,0,255
BackgroundAlpha=200
BackgroundColor=0,0,0,#BackgroundAlpha#
BarBackColor=118,211,0,30
G1=177, 255, 145,255
G2=200, 195, 47,255
G3=214, 125, 0,255
G4=212, 13, 18,255

;Icon
Load=[\xf013]
Clock=[\xf651]
Temp=[\xf2c7]
Memory=[\xf85a]
Fan=[\xf70f]
Power=[\xe315]
NetworkIn=[\xfbbe]
NetworkOut=[\xfbc1]

;Unit Symbol Variables
Temperatures=C
FanSpeeds=RPM
Percents=%
ClockSpeeds=MHz
Memories=MB
Powers=W
Network=KB/s
Data=MB

;Dimension
BackgroundW=250
BarW=(#BackgroundW#-33)
ValueX=(#BackgroundW#-15)
RoundedCorner=0

[BarStyle]
X=40
Y=2R
H=2
BarImage=#@#\Images\194x2Bar.png
SolidColor=#BarBackColor#
BarOrientation=Horizontal


[MeterLabelStyle]
FontFace=#TextFont#
FontColor=#LabelColor#
FontSize=8
FontWeight=400
AntiAlias=1
NumOfDecimals=0
X=40
Y=3r

[MeterValueTextStyle]
FontFace=#TextFont#
FontColor=#ValueColor#
FontSize=8
AntiAlias=1
NumOfDecimals=0

[MeterUnitTextStyle]
FontFace=#TextFont#
FontColor=#Accent#
FontSize=6
AntiAlias=0
NumOfDecimals=0