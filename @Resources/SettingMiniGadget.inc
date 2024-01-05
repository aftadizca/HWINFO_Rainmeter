[Variables]
TextFont=Gruppo


;CPU
CPULoad=2
CPUMemory=0
CPUClock=1
CPUTemp=3
CPUPower=4

;GPU
GPUTempEdge=5
GPUFan=10
GPUPower=6
GPUCoreClock=7
GPUMemoryClock=8
GPULoad=9
GPUMemory=11

;Colors
LabelColor=250,250,250
ValueColor=181, 255, 233
FrameColor=255,0,0,255
Accent=206,171,177,255
Warn=255,0,0,255
BackgroundAlpha=150
BackgroundColor=68, 69, 69,#BackgroundAlpha#  
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
Network=MB/s
Data=GB

;Dimension
BackgroundW=250
BarW=(#BackgroundW#-33)
ValueX=(#BackgroundW#-15)
RoundedCorner=0
UnitSize=6
UnitFace=Calibri Light

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

[MeterValueTextStyle]
FontFace=#TextFont#
FontColor=#ValueColor#
FontSize=10
AntiAlias=1
NumOfDecimals=0

[MeterUnitTextStyle]
FontFace=#TextFont#
FontColor=#Accent#
FontSize=8
AntiAlias=0
NumOfDecimals=0