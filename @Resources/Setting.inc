[Variables]
TextFont=VictorMono NF

;CPU
CPUMemoryMB=0
CPUCoreClockSpeedMHz=1
CPUCoreLoad=2
CPUTempDegrees=3
CPUPowerW=4

;Fan
FanCPU=6
FanWP=7
FanChassis1=5
FanChassis2=8
FanChassis3=9

;GPU
GPUTempDegreesEdge=10
GPUTempDegreesCenter=11
GPUFanSpeedRPM=12
GPUPowerW=13
GPUCoreClockSpeedMHz=14
GPUMemoryClock=15
GPUCoreLoad=16
GPUMemoryMB=17

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

;Unit Symbol Variables
Temperatures=C
FanSpeeds=RPM
Percents=%
ClockSpeeds=MHz
Memories=MB
Powers=W

;Dimension
BackgroundW=250
BarW=(#BackgroundW#-33)
ValueX=(#BackgroundW#-15)
Shape1H=1
Shape2H=2
Shape2R=2

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
FontSize=10
FontWeight=400
AntiAlias=1
NumOfDecimals=0
X=40
Y=3r

[MeterIconStyle]
FontFace=#TextFont#
FontColor=#Accent#
FontSize=14
AntiAlias=1
X=15
Y=10R

[MeterValueTextStyle]
FontFace=#TextFont#
FontColor=#ValueColor#
FontSize=10
FontWeight=900
AntiAlias=1
NumOfDecimals=0