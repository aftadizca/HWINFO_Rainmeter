[Variables]
TextFont=VictorMono NF

;Colors
LabelColor=250,250,250
ValueColor=255,255,255
FrameColor=255,0,0,255
BarBackColor=#LabelColor#,75
BackgroundAlpha=200
BackgroundColor=255,0,0,#BackgroundAlpha#
G1=177, 255, 145,255
G2=200, 195, 47,255
G3=214, 125, 0,255
G4=212, 13, 18,255
Accent=118,211,0,255
Warn=255,0,0,255

;Icon
Load=[\xf085]
Clock=[\xf9c4]
Temp=[\xfa0e]
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
BackgroundH=220
BackgroundW=250
BarW=(#BackgroundW#-33)
ValueX=(#BackgroundW#-15)
Shape1H=1
Shape2H=2
Shape2R=2

[BarStyle]
X=17
Y=2R
;W=#BarW#
H=2
BarImage=#@#\Images\217x2Bar.png
SolidColor=150,150,150,100
BarOrientation=Horizontal