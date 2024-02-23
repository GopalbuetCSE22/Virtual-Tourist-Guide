#include "iGraphics.h"
#include<windows.h>
#include<mmsystem.h>
#include<string>
#pragma comment(lib,"Winmm.lib")

void drawindo1();
void drawindo2();
void drawindo3();

void drawindia1();
void drawindia2();
void drawindia3();

void drawthaihotel();
void drawmaldiveshotel();
void drawindohotel();
void drawindiahotel();

void drawrajshahi1();
void drawrajshahi2();
void drawrajshahi3();

void drawsylhet1();
void drawsylhet2();
void drawsylhet3();

void drawkhulna1();
void drawkhulna2();
void drawkhulna3();

void drawcumilla1();
void drawcumilla2();
void drawcumilla3();

void drawbarishal1();
void drawbarishal2();

void drawdhakahotel();
void drawctghotel();
void drawrajshahihotel();
void drawsylhethotel();
void drawkhulnahotel();
void drawcumillahotel();
void drawbarishalhotel();

void touristbutton();
void settingbutton();
void about_usbutton();
void backbutton();
void inbdbutton();
void outbdbutton();
void bdDhakabutton();
void bdctgbutton();
void bdrajshahibutton();
void bdshylhetbutton();
void bdkhulnabutton();
void bdcumillabutton();
void bdbarishalbutton();
void backinbdbutton();
void ctgranga();
void ctgbandar();
void ctgcoxs();
void ctgsaj();
void dhakaahad();
void dhakalald();
void dhakasonad();

void europe();
void usa();
void russia();
void france();
void australia();
void usahotel();
void russiahotel();
void francehotel();
void aushotel();

void usa1();
void usa2();
void usa3();
void usa4();
void russia1();
void russia2();
void russia3();
void russia4();
void france1();
void france2();
void france3();
void france4();
void aus1();
void aus2();
void aus3();
void aus4();

void asia();
void tailand();
void maldives();
void indoneisa();
void india();

void thai1();
void thai2();
void thai3();
void maldiv1();
void maldiv2();
void maldiv3();
void indo1();
void indo2();
void indo3();
void india1();
void india2();
void india3();

void thaihotel();
void maldivehotel();
void indohotel();
void indiahotel();


void rajshahi1();
void rajshahi2();
void rajshahi3();

void sylhet1();
void sylhet2();
void sylhet3();

void khulna1();
void khulna2();
void khulna3();

void cumilla1();
void cumilla2();
void cumilla3();

void barishal1();
void barishal2();

void dhakahotel();
void ctghotel();
void rajshahihotel();
void sylhethotel();
void khulnahotel();
void cumillahotel();
void barishalhotel();

void drawreview();
void review();

void drawureview();
void ureview();

void drawtakereview();
void takereview();


void drawmapdhaka();
void drawmapctg();
void drawmapsylhet();
void drawmaprajshahi();
void drawmapkhulna();
void drawmapcumilla();
void drawmapbarishal();


void mapdhaka();
void mapctg();
void mapsylhet();
void maprajshahi();
void mapkhulna();
void mapcumilla();
void mapbarishal();
// void inbd_back();
// void outbd_back();

int start=1;
int login=0;    // should be 0
int homepage =0;            
int tourist = 0;
int Settings = 0;
int about_us = 0;
int inbd=0;
int outbd=0;
int bdDhaka=0;
int bdctg=0;
int bdrajshahi=0;
int bdshylhet=0;
int bdkhulna=0;
int bdcumilla=0;
int bdbarishal=0;
int ctgran=0;
int ctgban=0;
int ctgcox=0;
int ctgsajek=0;
int dhakaaha=0;
int dhakalal=0;
int dhakasona=0;

int europee=0;
int usaa=0;
int russiaa=0;
int francea=0;
int australiaa=0;
int usah=0;
int russiah=0;
int franceh=0;
int aush=0;

int usa1p=0;
int usa2p=0;
int usa3p=0;
int usa4p=0;

int russia1p=0;
int russia2p=0;
int russia3p=0;
int russia4p=0;

int france1p=0;
int france2p=0;
int france3p=0;
int france4p=0;

int aus1p=0;
int aus2p=0;
int aus3p=0;
int aus4p=0;

int asiaa=0;
int thai=0;
int maldiv=0;
int indo=0;
int indiaa=0;

int thai1p=0;
int thai2p=0;
int thai3p=0;
int maldip1p=0;
int maldip2p=0;
int maldip3p=0;
int indo1p=0;
int indo2p=0;
int indo3p=0;
int india1p=0;
int india2p=0;
int india3p=0;

int taih=0;
int maldiph=0;
int indoh=0;
int indiah=0;

int rajshahi1p=0;
int rajshahi2p=0;
int rajshahi3p=0;

int sylhet1p=0;
int sylhet2p=0;
int sylhet3p=0;

int khulna1p=0;
int khulna2p=0;
int khulna3p=0;

int cumilla1p=0;
int cumilla2p=0;
int cumilla3p=0;

int barishal1p=0;
int barishal2p=0;

int dhakah=0;
int ctgh=0;
int rajshahih=0;
int sylheth=0;
int khulnah=0;
int cumillah=0;
int barishalh=0;
int reviewbutton=0;
int ureviewbutton=0;


int logincontrol1=0;
int logincontrol2=0;
int flag =0;

int reviewtake=0;

int dhakam=0;
int ctgm=0;
int rajshahim=0;
int khulnam=0;
int cumillam=0;
int sylhetm=0;
int barishalm=0;

bool playmusic=true;
int x = 300, y = 300, r = 20;
/*
    function iDraw() is called again and again by the system.

    */

char photo[109][200]={"photos\\frame00021.bmp","photos\\frame00031.bmp","photos\\frame00041.bmp","photos\\frame00051.bmp","photos\\frame00061.bmp","photos\\frame00071.bmp","photos\\frame00081.bmp","photos\\frame00091.bmp","photos\\frame00101.bmp","photos\\frame00111.bmp","photos\\frame00121.bmp","photos\\frame00131.bmp","photos\\frame00141.bmp","photos\\frame00151.bmp","photos\\frame00171.bmp","photos\\frame00181.bmp","photos\\frame00191.bmp","photos\\frame00201.bmp","photos\\frame00211.bmp","photos\\frame00221.bmp","photos\\frame00231.bmp","photos\\frame00241.bmp","photos\\frame00251.bmp","photos\\frame00261.bmp","photos\\frame00271.bmp","photos\\frame00281.bmp","photos\\frame00291.bmp","photos\\frame00301.bmp","photos\\frame00311.bmp","photos\\frame00321.bmp","photos\\frame00331.bmp","photos\\frame00341.bmp","photos\\frame00351.bmp","photos\\frame00361.bmp","photos\\frame00371.bmp","photos\\frame00381.bmp","photos\\frame00391.bmp","photos\\frame00401.bmp","photos\\frame00411.bmp","photos\\frame00541.bmp","photos\\frame00551.bmp","photos\\frame00561.bmp","photos\\frame00571.bmp","photos\\frame00581.bmp","photos\\frame00591.bmp","photos\\frame00601.bmp","photos\\frame00611.bmp","photos\\frame00621.bmp","photos\\frame00631.bmp","photos\\frame00641.bmp","photos\\frame00651.bmp","photos\\frame00661.bmp","photos\\frame00671.bmp","photos\\frame00681.bmp","photos\\frame00691.bmp","photos\\frame00701.bmp","photos\\frame00711.bmp","photos\\frame00721.bmp","photos\\frame00731.bmp","photos\\frame00741.bmp","photos\\frame00751.bmp","photos\\frame00761.bmp","photos\\frame00771.bmp","photos\\frame01091.bmp","photos\\frame01101.bmp","photos\\frame01111.bmp","photos\\frame01121.bmp","photos\\frame01131.bmp","photos\\frame01141.bmp","photos\\frame01151.bmp","photos\\frame01161.bmp","photos\\frame01171.bmp","photos\\frame01181.bmp","photos\\frame01191.bmp","photos\\frame01201.bmp","photos\\frame01211.bmp","photos\\frame01221.bmp","photos\\frame01231.bmp","photos\\frame01241.bmp","photos\\frame01251.bmp","photos\\frame01261.bmp","photos\\frame01271.bmp","photos\\frame01281.bmp","photos\\frame01291.bmp","photos\\frame01301.bmp","photos\\frame01311.bmp","photos\\frame0321.bmp","photos\\frame01331.bmp","photos\\frame01341.bmp","photos\\frame01351.bmp","photos\\frame01361.bmp","photos\\frame01371.bmp","photos\\frame01381.bmp","photos\\frame01391.bmp","photos\\frame01401.bmp","photos\\frame01411.bmp","photos\\frame01421.bmp","photos\\frame01431.bmp","photos\\frame01441.bmp","photos\\frame01451.bmp","photos\\frame01461.bmp","photos\\frame01471.bmp","photos\\frame01481.bmp","photos\\frame01491.bmp","photos\\frame01501.bmp","photos\\frame01511.bmp","photos\\frame01521.bmp","photos\\frame01531.bmp","photos\\frame01541.bmp"};
int index=0;


char str[100];
int textdex=0;


char str1[1000];
int txtdex=0;

char reviewstr[5][1000]={"Nice Software,Easy to use for a new user.","Great app!!! This is increadbly fast and bug free.","I couldn’t be more impressed with its functionality and user-friendly interface","The interface is easy to navigate and I find everything I need quickly.","The developers have clearly put a great deal of thought and effort into creating a top-notch app."};

char pass[1000];
int passdex=0;


char namecheck[100][100];
char passcheck[100][100];

void iDraw()
{
    // place your drawing codes here
    iClear();
    
    iShowBMP2(0,0,photo[index],0);
    if (index==109)
    {
        start=0;
        login=1;
    }
    if (start == 1)
    {
        // iSetColor(0,0,0);
        iText(815,60,"Enter space to skip",GLUT_BITMAP_TIMES_ROMAN_24);
    }
    

    if(login==1){
        // drawlogin();
        iFilledRectangle(0, 0, 1136, 592);
        iShowBMP2(0, 0, "photo\\login.bmp", 0);
        // iSetColor(255,255,255);
    }
    if(login==1){
        // iSetColor(255,255,255);
        iText(680,266,str,GLUT_BITMAP_TIMES_ROMAN_24);
    }
    if(login == 1 ){ 
        //&& logincontrol2==1
        // iSetColor(255,255,255);
        iText(730,177,pass,GLUT_BITMAP_TIMES_ROMAN_24);
    }

    if (homepage == 1)
    {
        // drawhome();
    iSetColor(0, 0, 0);
    iFilledRectangle(0, 0, 1136, 592);
    iShowBMP2(0, 0, "photo\\home.bmp", 0);
    }
    else if (tourist == 1)
    {
        // drawtouristpage();
    iFilledRectangle(0, 0, 1136, 592);
    iShowBMP2(0, 0, "photo\\3.bmp", 0);
    iShowBMP2(900,30,"photo\\back1.bmp",0);
    iShowBMP2(160,200,"photo\\inbd.bmp",0);
    iShowBMP2(650,200,"photo\\outbd.bmp",0);
    }
    else if (Settings == 1)
    {
        // drawSettings();
    iFilledRectangle(0, 0, 1136, 592);
    iShowBMP2(0, 0, "photo\\settings.bmp", 0);
    }
    else if (about_us == 1)
    {
        // drawabout_us();
    iFilledRectangle(0, 0, 1136, 592);
    iShowBMP2(0, 0, "photo\\aboutus.bmp", 0);
    iShowBMP2(900,30,"photo\\back1.bmp",0);
    }
    else if(inbd==1){
        // drawinbd();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\inbd1.bmp",0);
    }
    else if (outbd==1)
    {
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\outbdpic.bmp",0);
        // drawoutbd();
    }
    else if(bdDhaka==1){
        // drawbddhaka();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\dhak_a.bmp",0);
    }
    else if(bdctg==1){
        // drawbdctg();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\ctg.bmp",0);
    }
    else if(bdrajshahi==1){
        // drawbdrajshahi();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\rajshahi.bmp",0);
    }
    else if(bdshylhet==1){
        // drawbdshylhet();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\sylhet.bmp",0);
    }
    else if(bdkhulna==1){
        // drawbdkhulna();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\khulna.bmp",0);
    }
    else if(bdcumilla==1){
        // drawbdcumilla();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\cumilla.bmp",0);
    }
    else if(bdbarishal==1){
        // drawbdbarishal();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\barishal.bmp",0);
    }
    else if(ctgran==1){
        // drawrangamati();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\rangamati.bmp",0);
    }
    else if(ctgban==1){
        // drawbandarban();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\badarban.bmp",0);
    }
    else if(ctgcox==1){
        // drawcoxbazar();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\Coxs.bmp",0);
    }
    else if(ctgsajek==1){
        // drawsajek();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\Sajek.bmp",0);
    }
    else if(dhakaaha==1){
        // drawahsan();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\ahasan manjil.bmp",0);
    }
    else if(dhakalal==1){
        // drawlalbagh();
        iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\lalbag fort.bmp",0);
    }
    else if(dhakasona==1){
        // drawsonargaon();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\sonargaon.bmp",0);
    }
    else if(europee==1){
        // draweurope();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\europe.bmp",0);
    }
    else if(usaa==1){
        // drawusa();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\usapage.bmp",0);
    }
    else if(russiaa==1){
        // drawrussia();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\russiapage.bmp",0);
    }
    else if(francea==1){
        // drawfrance();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\francepage.bmp",0);
    }
    else if(australiaa==1){
        // drawaustralia();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\australiapage.bmp",0);
    }
    else if(usah==1){
        // drawusahotel();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\usahotel.bmp",0);
    }
    else if(russiah==1){
        // drawrussiahotel();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\russiahotel.bmp",0); 
    }
    else if(franceh==1){
        // drawfrancehotel();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\francehotel.bmp",0);
    }
    else if(aush==1){
        // drawaushotel();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\australahotel.bmp",0);
    }
    else if(usa1p == 1){
        // drawusa1();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\usa1.bmp",0);
    }
    else if(usa2p == 1){
        // drawusa2();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\usa2.bmp",0);
    }
    else if(usa3p == 1){
        // drawusa3();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\usa3.bmp",0);
    }
    else if(usa4p == 1){
        // drawusa4();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\usa4.bmp",0);
    }
    else if(russia1p == 1){
        // drawrussia1();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\russia1.bmp",0);
    }
    else if(russia2p == 1){
        // drawrussia2();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\russia2.bmp",0);
    }
    else if(russia3p == 1){
        // drawrussia3();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\russia3.bmp",0);
    }
    else if(russia4p == 1){
        // drawrussia4();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\russia4.bmp",0);
    }
    if (france1p == 1)
    {
        // drawfrance1();
        iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\france1.bmp",0);
    }
    if (france2p == 1)
    {
        // drawfrance2();
        iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\france2.bmp",0);
    }
    if (france3p == 1)
    {
        // drawfrance3();
        iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\france3.bmp",0);
    }
    if (france4p == 1)
    {
        // drawfrance4();
        iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\france4.bmp",0);
    }
    if (aus1p ==1 )
    {
        // drawaus1();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\aus1.bmp",0);
    }
    if (aus2p ==1 )
    {
        // drawaus2();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\aus2.bmp",0);
    }
    if (aus3p ==1 )
    {
        // drawaus3();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\aus3.bmp",0);
    }
    if (aus4p ==1 )
    {
        // drawaus4();
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\aus4.bmp",0);
    }
    if(asiaa == 1){
        // drawasia();
        iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\asia.bmp",0);
    }
    if (thai==1)
    {
        // drawthailand();
        iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\thailand.bmp",0);
    }
    if (maldiv==1)
    {
        // drawmaldives();
        iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\maldives.bmp",0);
    }
    if (indo==1)
    {
        // drawindonesia();
        iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\indonesia.bmp",0);
    }
    if (indiaa==1)
    {
        // drawindia();
        iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\india.bmp",0);
    }
    if (thai1p==1)
    {
        // drawthai1();
        iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\tailand1.bmp",0);
    }
    if (thai2p==1)
    {
        // drawthai2();
        iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\thailand2.bmp",0);
    }
    if (thai3p==1)
    {
        // drawthai3();
        iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\tailand3.bmp",0);
    }
    if (maldip1p ==1)
    {
        // drawmaldives1();
        iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\maldives1.bmp",0);
    }
    if (maldip2p ==1)
    {
        // drawmaldives2();
        iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\maldives2.bmp",0);
    }
    if (maldip3p ==1)
    {
        // drawmaldives3();
        iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\maldives3.bmp",0);
    }
    if (indo1p==1)
    {
        drawindo1();
    }
    if (indo2p==1)
    {
        drawindo2();
    }
    if (indo3p==1)
    {
        drawindo3();
    }
    if (india1p==1)
    {
        drawindia1();
    }
    if (india2p==1)
    {
        drawindia2();
    }
    if (india3p==1)
    {
        drawindia3();
    }
    if (taih == 1){
        drawthaihotel();
    }
    if (maldiph == 1){
        drawmaldiveshotel();
    }
    if (indoh == 1){
        drawindohotel();
    }
    if (indiah==1){
        drawindiahotel();
    }
    if(rajshahi1p==1){
        drawrajshahi1();
    }
    if(rajshahi2p==1){
        drawrajshahi2();
    }
    if(rajshahi3p==1){
        drawrajshahi3();
    }
    if (sylhet1p==1)
    {
        drawsylhet1();
    }
    if (sylhet2p==1)
    {
        drawsylhet2();
    }
    if (sylhet3p==1)
    {
        drawsylhet3();
    }
    if (khulna1p ==1)
    {
        drawkhulna1();
    }
    if (khulna2p ==1)
    {
        drawkhulna2();
    }
    if (khulna3p ==1)
    {
        drawkhulna3();
    }
    if (cumilla1p==1)
    {
        drawcumilla1();
    }
    if (cumilla2p==1)
    {
        drawcumilla2();
    }
    if (cumilla3p==1)
    {
        drawcumilla3();
    }
    if (barishal1p==1)
    {
        drawbarishal1();
    }
    if (barishal2p==1)
    {
        drawbarishal2();
    }
    if (dhakah == 1)
    {
        drawdhakahotel();
    }
    if (ctgh == 1)
    {
        drawctghotel();
    }
    if (rajshahih == 1)
    {
        drawrajshahihotel();
    }
    if (sylheth == 1)
    {
        drawsylhethotel();
    }
    if (khulnah == 1)
    {
        drawkhulnahotel();
    }
    if (cumillah == 1)
    {
        drawcumillahotel();
    }
    if (barishalh == 1)
    {
        drawbarishalhotel();
    }
    if (reviewbutton==1)
    {
        drawreview();
        // iText(264,366,str1,GLUT_BITMAP_TIMES_ROMAN_24);
    }
    if (ureviewbutton==1)
    {
        drawureview();
    }
    if(reviewtake == 1){
        drawtakereview();
        iSetColor(0,0,0);
        iText(264,366,str1,GLUT_BITMAP_TIMES_ROMAN_24);
    }
    if (dhakam == 1)
    {
        drawmapdhaka();
    }
    if (ctgm == 1)
    {
        drawmapctg();
    }
    if (sylhetm == 1)
    {
        drawmapsylhet();
    }
    if (barishalm == 1)
    {
        drawmapbarishal();
    }
    if (khulnam == 1)
    {
        drawmapkhulna();
    }
    if (cumillam == 1)
    {
        drawmapcumilla();
    }
    if (rajshahim == 1)
    {
        drawmaprajshahi();
    }
}
// 	iSetColor(20, 200, 200);
// 	iFilledCircle(x, y, r);
// 	//iFilledRectangle(10, 30, 20, 20);
// 	iSetColor(20, 200, 0);
// 	iText(40, 40, "Hi, I am iGraphics");
// 	iRectangle(100, 200, 100, 50);
// }

/*
    function iMouseMove() is called when the user presses and drags the mouse.
    (mx, my) is the position where the mouse pointer is.
    */
void iMouseMove(int mx, int my)
{
    printf("x = %d, y= %d\n", mx, my);
    // place your codes here
}

/*
    function iMouse() is called when the user presses/releases the mouse.
    (mx, my) is the position where the mouse pointer is.
    */


FILE* file=fopen("text.txt","a");
FILE* files=fopen("text1.txt","a");

FILE* password =fopen("pass.txt","a");

void iMouse(int button, int state, int mx, int my)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        // place your codes here
        printf("x = %d, y= %d\n", mx, my);
        // x += 10;
        // y += 10;


        // if (start ==1 && mx >= 0 && mx <= 1136 && my >= 0 && my <= 592 )
        // {
        //     login=1;
        //     start=0;
        //     // homepage=0;
        // }
        if (Settings ==1 && mx>=112 && mx<=364 && my >=103 && my<= 196)
        {
            Settings=1;
            playmusic = false;
            PlaySound(0,0,0);
        }
        if (Settings == 1 && mx>=111 && mx<=359 && my >=218 && my<= 303)
        {
            if(playmusic == false){
            PlaySound("photo\\x.wav", NULL, SND_ASYNC | SND_LOOP);
            }
        }
        if(login==1 && (mx >= 1006 && mx <= 1124 && my >= 97 && my <= 141) && str[0] != '\0'){
            Settings=0;about_us=0;tourist=0;
            login=0;
            homepage=1;
            if (file!= NULL)
            {
                fputs(str,file);
                fclose(file);
            }
        }
        
        // if(reviewbutton==1 && (mx >= 1006 && mx <= 1124 && my >= 97 && my <= 141) && str1[0] != '\0'){
        //     if (files!= NULL)
        //     {
        //         fputs(str1,files);
        //         fclose(files);
        //     }
        // }
        if (homepage == 1 && mx >= 757 && mx <= 983 && my >= 395 && my <= 478)
        {
            touristbutton();
        }
        else if (homepage == 1 && mx >= 754 && mx <= 983 && my >= 262 && my <= 340)
        {
            settingbutton();
        }
        else if (homepage == 1 && mx >= 754 && mx <= 983 && my >= 121 && my <= 196)
        {
            about_usbutton();
        }
        else if(tourist==1| Settings==1| about_us==1 && (mx>=902 && mx<=1055 && my>=55 && my<=168)){
            backbutton();
        }
        else if(bdrajshahi==1| bdbarishal==1| bdshylhet==1|bdcumilla==1|bdkhulna==1 && (mx>=973 && mx<=1068 && my>=25 && my<=77)){
            backinbdbutton();
        }
        else if (bdctg == 1 && (mx>=945 && mx<=1105 && my>=22 && my<=165))
        {
            backinbdbutton();
        }
        else if (bdDhaka == 1 && (mx>=1024 && mx<=1123 && my>=24 && my<=118))
        {
            backinbdbutton();
        }
        
        else if(tourist==1 && mx>=166 && mx<= 498 && my>= 202 && my<= 498){
            inbdbutton();
        }
        else if(tourist==1 && mx>=656 && mx<= 944 && my>= 201 && my<= 499){
            outbdbutton();
        }
        else if(inbd==1 && mx>=80 && mx<=315 &&my>=507 && my <=568){
            bdDhakabutton();
        }
        else if(inbd==1 && mx>=473 && mx<=712 &&my>=506 && my <=568){
            bdctgbutton();
        }
        else if(inbd==1 && mx>=80 && mx<=315 &&my>=395 && my <=457){
            bdrajshahibutton();
        }
        else if(inbd==1 && mx>=473 && mx<=712 &&my>=392 && my <=455){
            bdshylhetbutton();
        }
        else if(inbd==1 && mx>=80 && mx<=315 &&my>=278 && my <=336){
            bdkhulnabutton();
        }
        else if(inbd==1 && mx>=477 && mx<=709 &&my>=278 && my <=338){
            bdcumillabutton();
        }
        else if(inbd==1 && mx>=80 && mx<=319 &&my>=155  && my <=216){
            bdbarishalbutton();
        }
        else if(inbd==1 && mx>=1021 && mx<=1081 &&my>=65 && my <=124){
            touristbutton();
        }
        else if(outbd==1 && mx>=954 && mx<=1027 &&my>=34 && my <=84){
            touristbutton();
        }
        else if (bdctg==1 && mx>=88 && mx<=223 && my>=423 && my <= 441)
        {
            ctgranga();
        }
        else if (bdctg==1 && mx>=84 && mx<=221 && my>=332 && my <= 354)
        {
            ctgbandar();
        }
        else if (bdctg==1 && mx>=88 && mx<=223 && my>=250 && my <= 268)
        {
            ctgcoxs();
        }
        else if (bdctg==1 && mx>=88 && mx<=151 && my>=162 && my <= 185)
        {
            ctgsaj();
        }
        else if (ctgran ==1 | ctgban ==1 | ctgcox==1 | ctgsajek ==1 && (mx>=1039 && mx<= 1113 && my>=20 && my<=91))
        {
            bdctg=1;
            ctgran =0, ctgban =0, ctgcox=0, ctgsajek =0;
        }
        else if (bdDhaka==1 && mx>=57 && mx<=302 && my>= 422 && my<=524)
        {
            dhakaahad();
        }
        else if (bdDhaka==1 && mx>=409 && mx<=650 && my>= 423 && my<=522)
        {
            dhakalald();
        }
        else if (bdDhaka==1 && mx>=805 && mx<=1050 && my>= 423 && my<=522)
        {
            dhakasonad();
        }
        else if (dhakaaha==1 | dhakalal==1 | dhakasona ==1 && (mx>=1039 && mx<= 1113 && my>=20 && my<=91))
        {
            bdDhaka=1;
            dhakaaha=0, dhakalal=0,dhakasona =0;
        }
        else if (outbd == 1 && mx>=643 && mx<=918 && my>= 426 && my<=500)
        {
            europe();
        }
        else if (europee == 1 && mx>=479 && mx<=926 && my>= 468 && my<=568)
        {
            usa();
        }
        else if (europee == 1 && mx>=479 && mx<=929 && my>= 320 && my<=420)
        {
            russia();
        }
        else if (europee == 1 && mx>=479 && mx<=925 && my>= 174 && my<=280)
        {
            france();
        }
        else if (europee == 1 && mx>=476 && mx<=926 && my>= 30 && my<=134)
        {
            australia();
        }
        else if ((usaa==1| russiaa==1 | australiaa==1| francea==1) && mx>=1023 && mx<=1094 && my>= 35 && my<=84)
        {
            europee=1;
            usaa=0, russiaa= 0, australiaa=0,francea=0;
        }
        else if ((europee==1) && mx>=1007 && mx<=1079 && my>= 61 && my<=107)
        {
            outbd=1;
            europee=0;
        }
        else if ((usaa==1) && mx>=427 && mx<=772 && my>= 70 && my<=120 )
        {
            usahotel();
        }
        else if ((russiaa==1) && mx>=427 && mx<=772 && my>= 70 && my<=120 )
        {
            russiahotel();
        }
        else if ((francea==1) && mx>=427 && mx<=772 && my>= 70 && my<=120 )
        {
            francehotel();
        }
        else if ((australiaa==1) && mx>=427 && mx<=772 && my>= 70 && my<=120 )
        {
            aushotel();
        }
        else if (aush==1 && mx>=1019 && mx<=1085 && my>= 40 && my<=83 )
        {
           australiaa=1;
           aush=0;
        }
        else if (usah==1 && mx>=1019 && mx<=1085 && my>= 40 && my<=83 )
        {
           usaa=1;
           usah=0;
        }
        else if (russiah==1 && mx>=1019 && mx<=1085 && my>= 40 && my<=83 )
        {
           russiaa=1;
           russiah=0;
        }
        else if (franceh==1 && mx>=1019 && mx<=1085 && my>= 40 && my<=83 )
        {
           francea=1;
           franceh=0;
        }
        else if (usaa==1 && mx>=439 && mx<=890 && my>= 530 && my<=568 )
        {
           usa1();
        }
        else if (usaa==1 && mx>=433 && mx<=850 && my>= 431 && my<=458 )
        {
           usa2();
        }
        else if (usaa==1 && mx>=437 && mx<=786 && my>= 328 && my<=350 )
        {
            usa3();
        }
        else if (usaa==1 && mx>=438 && mx<=695 && my>= 220 && my<=248 )
        {
           usa4();
        }
        else if (((usa1p== 1) | usa2p ==1 | usa3p == 1| usa4p ==1)&& mx>=1019 && mx<=1085 && my>= 40 && my<=83 )
        {
           usaa=1;
           usa1p =0, usa2p =0, usa3p =0,usa4p ==0;
        }
        else if (russiaa==1 && mx>=434 && mx<=821 && my>= 504 && my<=550 )
        {
            russia1();
        }
        else if (russiaa==1 && mx>=437 && mx<=644 && my>= 390 && my<=440 )
        {
            russia2();
        }
        else if (russiaa==1 && mx>=432 && mx<=823 && my>= 293 && my<= 343 )
        {
            russia3();
        }
        else if (russiaa==1 && mx>=433 && mx<=1059 && my>= 185 && my<=235 )
        {
            russia4();
        }
        else if (((russia1p== 1) | russia2p ==1 | russia3p == 1| russia4p ==1)&& mx>=1019 && mx<=1085 && my>= 40 && my<=83 )
        {
           russiaa=1;
           russia1p =0;russia2p =0;russia3p =0;russia4p =0;
        }
        else if ((francea ==1) &&  mx>=439 && mx<=623 && my>= 497 && my<=515)
        {
            france1();
        }
        else if ((francea ==1) &&  mx>=439 && mx<=786 && my>= 412 && my<=461)
        {
            france2();
        }
        else if ((francea ==1) &&  mx>=439 && mx<=805 && my>= 340 && my<=377)
        {
            france3();
        }
        else if ((francea ==1) &&  mx>=439 && mx<=1108 && my>= 260 && my<=310)
        {
            france4();
        }
        else if (((france2p== 1) | france1p ==1 | france3p == 1| france4p ==1)&& mx>=1019 && mx<=1126 && my>= 10 && my<=83 )
        {
           francea=1;
           france1p=0;france2p=0;france3p=0;france4p=0;
        }
        else if ((australiaa==1) &&  mx>=437 && mx<=974 && my>= 500 && my<=536)
        {
            aus1();
        }
        else if ((australiaa==1) &&  mx>=437 && mx<=863 && my>= 414 && my<=449)
        {
            aus2();
        }
        else if ((australiaa==1) &&  mx>=437 && mx<=922 && my>= 316 && my<=361)
        {
            aus3();
        }
        else if ((australiaa==1) &&  mx>=437 && mx<=851 && my>= 228 && my<=266)
        {
            aus4();
        }
        else if (((aus1p== 1) | aus2p ==1 | aus3p == 1| aus4p ==1)&& mx>=1019 && mx<=1126 && my>= 10 && my<=83)
        {
           australiaa=1;
           aus1p=0;aus2p=0;aus3p=0;aus4p=0;
        }
        else if (outbd == 1 &&  mx>=53 && mx<=323 && my>= 428 && my<=496)
        {
            asia();
        }
        else if(asiaa==1 && mx>=1024 && mx<=1098 && my>= 114 && my<=168){
            asiaa=0;
            outbd=1;
        }
        else if ((asiaa==1) &&  mx>=219 && mx<=567 && my>= 462 && my<= 530)
        {
            tailand();
        }
        else if ((asiaa==1) &&  mx>=218 && mx<=568 && my>= 363 && my<= 426)
        {
            maldives();
        }
        else if ((asiaa==1) &&  mx>=219 && mx<=562 && my>= 264 && my<= 334)
        {
            indoneisa();
        }
        else if ((asiaa==1) &&  mx>=219 && mx<=567 && my>= 170 && my<= 232)
        {
            india();
        }
        else if ((thai==1 | indiaa==1 | maldiv==1| indo ==1) &&  mx>=1045 && mx<=1120 && my>= 27 && my<= 78)
        {
            thai=0;indiaa=0;maldiv=0;indo=0;
            asiaa=1;
        }
        else if ((thai ==1) &&  mx>=475 && mx<=945 && my>= 463 && my<=564)
        {
            thai1();
        }
        else if ((thai ==1) &&  mx>=475 && mx<=945 && my>=306  && my<=404)
        {
            thai2();
        }
        else if ((thai ==1) &&  mx>=475 && mx<=945 && my>= 148 && my<=251)
        {
            thai3();
        }
        else if ((maldiv ==1) &&  mx>=475 && mx<=945 && my>= 463 && my<=564)
        {
            maldiv1();
        }
        else if ((maldiv ==1) &&  mx>=475 && mx<=945 && my>=306  && my<=404)
        {
            maldiv2();
        }
        else if ((maldiv ==1) &&  mx>=475 && mx<=945 && my>= 148 && my<=251)
        {
            maldiv3();
        }
        else if ((indo ==1) &&  mx>=475 && mx<=945 && my>= 463 && my<=564)
        {
            indo1();
        }
        else if ((indo ==1) &&  mx>=475 && mx<=945 && my>=306  && my<=404)
        {
            indo2();
        }
        else if ((indo ==1) &&  mx>=475 && mx<=945 && my>= 148 && my<=251)
        {
            indo3();
        }
        else if ((indiaa ==1) &&  mx>=475 && mx<=945 && my>= 463 && my<=564)
        {
            india1();
        }
        else if ((indiaa ==1) &&  mx>=475 && mx<=945 && my>=306  && my<=404)
        {
            india2();
        }
        else if ((indiaa ==1) &&  mx>=475 && mx<=945 && my>= 148 && my<=251)
        {
            india3();
        }
        else if ((india1p==1| india2p==1| india3p==1)&& mx>=1052 && mx<=1132 && my>= 10 && my<=90)
        {
            indiaa=1;
            india1p=0; india2p=0; india3p=0;
        }
        else if ((indo1p==1| indo2p==1| indo3p==1)&& mx>=1052 && mx<=1132 && my>= 10 && my<=90)
        {
            indo=1;
            indo1p=0;indo2p=0;indo3p=0;
        }
        else if ((maldip1p==1| maldip2p==1| maldip3p==1)&& mx>=1052 && mx<=1132 && my>= 10 && my<=90)
        {
            maldiv=1;
            maldip1p=0; maldip2p=0; maldip3p=0;
        }
        else if ((thai1p==1| thai2p==1| thai3p==1)&& mx>=1052 && mx<=1132 && my>= 10 && my<=90)
        {
            thai=1;
            thai1p=0; thai2p=0; thai3p=0;
        }
        else if ((thai ==1) &&  mx>=577 && mx<=912 && my>= 12 && my<=107)
        {
            thaihotel();
        }
        else if ((maldiv ==1) &&  mx>=577 && mx<=912 && my>= 12 && my<=107)
        {
            maldivehotel();
        }
        else if ((indo ==1) &&  mx>=577 && mx<=912 && my>= 12 && my<=107)
        {
            indohotel();
        }
        else if ((indiaa ==1) &&  mx>=577 && mx<=912 && my>= 12 && my<=107)
        {
            indiahotel();
        }
        else if (taih==1 && mx>=995 && mx<=1080 && my>= 53 && my<=109 )
        {
           thai=1;
           taih=0;
        }
        else if (indiah==1 && mx>=995 && mx<=1080 && my>= 53 && my<=109 )
        {
           indiaa=1;
           indiah=0;
        }
        else if (indoh==1 && mx>=995 && mx<=1080 && my>= 53 && my<=109 )
        {
           indo=1;
           indoh=0;
        }
        else if (maldiph==1 && mx>=995 && mx<=1080 && my>= 53 && my<=109 )
        {
           maldiv=1;
           maldiph=0;
        }
        else if (bdrajshahi==1 && mx>=41 && mx<=609 && my>= 390 && my<=490 )
        {
            rajshahi1();
        }
        else if (bdrajshahi==1 && mx>=41 && mx<=609 && my>= 244 && my<=339 )
        {
            rajshahi2();
        }
        else if (bdrajshahi==1 && mx>=41 && mx<=609 && my>= 77 && my<=170 )
        {
            rajshahi3();
        }
        else if (bdshylhet==1 && mx>=41 && mx<=609 && my>= 390 && my<=490 )
        {
            sylhet1();
        }
        else if (bdshylhet==1 && mx>=41 && mx<=609 && my>= 244 && my<=339 )
        {
            sylhet2();
        }
        else if (bdshylhet==1 && mx>=41 && mx<=609 && my>= 77 && my<=170 )
        {
            sylhet3();
        }

        else if (bdcumilla==1 && mx>=41 && mx<=609 && my>= 390 && my<=490 )
        {
            cumilla1();
        }
        else if (bdcumilla==1 && mx>=41 && mx<=609 && my>= 244 && my<=339 )
        {
            cumilla2();
        }
        else if (bdcumilla==1 && mx>=41 && mx<=609 && my>= 77 && my<=170 )
        {
            cumilla3();
        }

        else if (bdkhulna==1 && mx>=41 && mx<=609 && my>= 390 && my<=490 )
        {
            khulna1();
        }
        else if (bdkhulna==1 && mx>=41 && mx<=609 && my>= 244 && my<=339 )
        {
            khulna2();
        }
        else if (bdkhulna==1 && mx>=41 && mx<=609 && my>= 77 && my<=170 )
        {
            khulna3();
        }

        else if (bdbarishal==1 && mx>=41 && mx<=609 && my>= 390 && my<=490 )
        {
            barishal1();
        }
        else if (bdbarishal==1 && mx>=41 && mx<=609 && my>= 244 && my<=339 )
        {
            barishal2();
        }
        else if (((rajshahi1p== 1) |  rajshahi2p==1 | rajshahi3p == 1)&& mx>=1044 && mx<=1132 && my>= 7 && my<=84 )
        {
           bdrajshahi=1;
           rajshahi1p=0;rajshahi2p=0;rajshahi3p=0;
        }
        else if (((sylhet1p== 1) |  sylhet2p==1 | sylhet3p == 1)&& mx>=1044 && mx<=1132 && my>= 7 && my<=84 )
        {
           bdshylhet=1;
           sylhet1p=0;sylhet2p=0;sylhet3p=0;
        }
        else if (((khulna1p== 1) |  khulna2p==1 | khulna3p == 1)&& mx>=1044 && mx<=1132 && my>= 7 && my<=84 )
        {
           bdkhulna=1;
           khulna1p=0;khulna2p=0;khulna3p=0;
        }
        else if (((cumilla1p== 1) |  cumilla2p==1 | cumilla3p == 1)&& mx>=1044 && mx<=1132 && my>= 7 && my<=84 )
        {
           bdcumilla=1;
           cumilla1p=0;cumilla2p=0;cumilla3p=0;
        }
        else if (((barishal1p== 1) |  barishal2p==1)&& mx>=1044 && mx<=1132 && my>= 7 && my<=84 )
        {
           bdbarishal=1;
           barishal1p=0;barishal2p=0;
        }
        else if (bdDhaka ==1 && mx>=60 && mx<=496 && my>= 188 && my<=310)
        {
            dhakahotel();
        }
        else if (bdctg ==1 && mx>=461 && mx<=896 && my>= 54 && my<=172)
        {
            ctghotel();
        }
        else if (bdrajshahi ==1 && mx>=666 && mx<=1104 && my>= 258 && my<=396)
        {
            rajshahihotel();
        }
        else if (bdshylhet ==1 && mx>=666 && mx<=1104 && my>= 258 && my<=396)
        {
            sylhethotel();
        }
        else if (bdkhulna ==1 && mx>=666 && mx<=1104 && my>= 258 && my<=396)
        {
            khulnahotel();
        }
        else if (bdcumilla ==1 && mx>=666 && mx<=1104 && my>= 258 && my<=396)
        {
            cumillahotel();
        }
        else if (bdbarishal ==1 && mx>=666 && mx<=1104 && my>= 258 && my<=396)
        {
            barishalhotel();
        }
        else if (dhakah==1 && mx>=1001 && mx<=1109 && my>= 19 && my<=87 )
        {
            dhakah=0;
            bdDhaka=1;
        }
        else if (ctgh==1 && mx>=1001 && mx<=1109 && my>= 19 && my<=87 )
        {
            ctgh=0;
            bdctg=1;
        }
        else if (rajshahih==1 && mx>=1001 && mx<=1109 && my>= 19 && my<=87 )
        {
            rajshahih=0;
            bdrajshahi=1;
        }
        else if (sylheth==1 && mx>=1001 && mx<=1109 && my>= 19 && my<=87 )
        {
            sylheth=0;
            bdshylhet=1;
        }
        else if (khulnah==1 && mx>=1001 && mx<=1109 && my>= 19 && my<=87 )
        {
            khulnah=0;
            bdkhulna=1;
        }
        else if (cumillah==1 && mx>=1001 && mx<=1109 && my>= 19 && my<=87 )
        {
            cumillah=0;
            bdcumilla=1;
        }
        else if (barishalh==1 && mx>=1001 && mx<=1109 && my>= 19 && my<=87 )
        {
            barishalh=0;
            bdbarishal=1;
        }
        else if(homepage==1 && mx>=880 && mx<=1116 && my>= 518 && my<=583 ){
            review();
        }
        else if(reviewbutton == 1 && mx>=990 && mx<=1078 && my>= 39 && my<=94){
            reviewbutton=0;
            homepage=1;
        }
        else if (reviewbutton==1 && mx>=140 && mx<=444 && my>= 38 && my<=131)
        {
            ureview();
        }
        else if (ureviewbutton ==1 && mx>=984 && mx<=1085 && my>= 36 && my<=93)
        {
            ureviewbutton=0;
            reviewbutton=1;
        }
        else if (login == 1 && mx>=591 && mx<=1057 && my>= 257 && my<= 292)
        {
            logincontrol1=1;
            logincontrol2=0;
        }
        else if (login == 1 && mx>=590 && mx<=1039 && my>= 151 && my<= 220)
        {
            logincontrol1=0;
            logincontrol2=1;
            if(flag == 0){
            fputs(str,file);
            // fputs("\n",file);
            }
        }
        // else if (reviewbutton==1 && mx>=135 && mx<=1003 && my>= 265 && my<= 429)
        // {
        //     reviewtake=1;
        // }

        else if (reviewbutton == 1 && mx>=499 && mx<=1069 && my>= 240 && my<= 482)
        {
            takereview();
        }
        else if (reviewtake == 1 && mx>=1003 && mx<=1091 && my>= 26 && my<= 90)
        {
            reviewbutton =1;
            reviewtake = 0;
        }

        else if(bdDhaka==1 && mx>=85 && mx<=402 && my>= 24 && my<= 157){
            mapdhaka();
        }
        else if(bdctg==1 && mx>=841 && mx<=1135 && my>= 420 && my<= 532){
            mapctg();
        }
        else if(bdkhulna==1 && mx>=687 && mx<=1021 && my>= 123 && my<= 241){
            mapkhulna();
        }
        else if(bdrajshahi==1 && mx>=676 && mx<=1032 && my>= 118 && my<= 246){
            maprajshahi();
        }
        else if(bdbarishal==1 && mx>=680 && mx<=1015 && my>= 128 && my<= 236){
            mapbarishal();
        }
        else if(bdshylhet==1 && mx>=672 && mx<=1006 && my>= 101 && my<= 243){
            mapsylhet();
        }
        else if(bdcumilla==1 && mx>=679 && mx<=998 && my>= 121 && my<= 239){
            mapcumilla();
        }
        else if (dhakam==1 && mx>=1016 && mx<=1092 && my>= 33 && my<= 90)
        {
            dhakam=0;
            bdDhaka=1;
        }
        else if (ctgm==1 && mx>=1016 && mx<=1092 && my>= 33 && my<= 90)
        {
            ctgm=0;
            bdctg=1;
        }
        else if (sylhetm==1 && mx>=1016 && mx<=1092 && my>= 33 && my<= 90)
        {
            sylhetm=0;
            bdshylhet=1;
        }
        else if (barishalm==1 && mx>=1016 && mx<=1092 && my>= 33 && my<= 90)
        {
            barishalm=0;
            bdbarishal=1;
        }
        else if (khulnam==1 && mx>=1016 && mx<=1092 && my>= 33 && my<= 90)
        {
            khulnam=0;
            bdkhulna=1;
        }
        else if (cumillam==1 && mx>=1016 && mx<=1092 && my>= 33 && my<= 90)
        {
            cumillam=0;
            bdcumilla=1;
        }
        else if (rajshahim==1 && mx>=1016 && mx<=1092 && my>= 33 && my<= 90)
        {
            rajshahim=0;
            bdrajshahi=1; 
        }
        

        // else if (Settings==1 && mx>=0 && mx<=1136 && my>= 0 && my<=592 )
        // {
        //     europee=0;
        // }
    }
    // if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
    // {
    //     // place your codes here
    //     x -= 10;
    //     y -= 10;
    // }
}

/*
    function iKeyboard() is called whenever the user hits a key in keyboard.
    key- holds the ASCII value of the key pressed.
    */
void iKeyboard(unsigned char key)
{
    if (start == 1 && key == ' ')
    {
        login=1;
        start = 0;
        // iSetColor(0,0,0);
    }
    
    if(login==1 && logincontrol1 == 1){
    if (key != '\b' && key != '\r')
    {
        str[textdex]=key;
        textdex++;
        str[textdex]='\0';
    }
    else if(key == '\r'){
        fputs(str,file);
        // fputs("\n",file);
        flag =1;
        // login=0;
        // homepage=1;
    }
    else if(key=='\b'){
        if (textdex<=0)
        {
            textdex=0;
        }
        else{
        textdex--;
        }
        str[textdex]='\0';
    }
    }

    if(login==1 && logincontrol2 == 1){
    if (key != '\b' && key != '\r')
    {
        pass[passdex]=key;
        passdex++;
        pass[passdex]='\0';
    }
    else if(key == '\r'){
        fputs(pass,password);
        // fputs("\n",password);
        // int i=0;
        // while(!feof(file)){
        //     fscanf(file,"%s",namecheck[i]);
        //     i++;
        // }
        // namecheck[i][0]='\0';   
        // int j=0;
        // while(!feof(password)){
        //     fscanf(password,"%s",passcheck[j]);
        //     j++;
        // }
        // passcheck[j][0]='\0';
        
        // int ncheck=0, pcheckindex=-1;
        // for (int k = 0; k < i; k++)
        // {
        //     if (str == namecheck[i])
        //     {
        //         ncheck=1;
        //         pcheckindex=i;
        //     }
        // }
        // if(ncheck==1 && (passcheck[pcheckindex]==pass)){
        //     login=0;
        //     homepage=1;
        // }
        // int pchechk=0;
        // for (int k = 0; k < j; k++)
        // {
        //     if (pass == passcheck[i])
        //     {
        //         pchechk=1;
        //     }
        // }
        
        login=0;
        homepage=1;
    }
    else if(key=='\b'){
        if (passdex<=0)
        {
            passdex=0;
        }
        else{
        passdex--;
        }
        pass[passdex]='\0';
    }
    }

    if(reviewtake==1){
    // int txtdex=0;
    files=fopen("text1.txt","a");
    if (key != '\b' && key != '\r')
    {
        str1[txtdex]=key;
        txtdex++;
        str1[txtdex]='\0';
    }
    else if(key == '\r')
    {
        txtdex=0;
        // fputs("\n",files);
        // fputs(str1,files);
        fprintf(files,str1);
        fprintf(files,"\n");
        // fputs("\n",files);
        // fputc('\n',files);
        fclose(files);
        // strcpy(reviewstr[4],str1);
        reviewbutton = 1;
        reviewtake = 0;
        ureviewbutton=0;
        for (int i = 0; i < strlen(str1); i++)
        {
            str1[i] = '\0';
        }
    }
    else{
        if (txtdex<=0)
        {
            txtdex=0;
        }
        else
        txtdex--;
        str1[txtdex]='\0';
    }
    }

}

/*
    function iSpecialKeyboard() is called whenver user hits special keys like-
    function keys, home, end, pg up, pg down, arraows etc. you have to use
    appropriate constants to detect them. A list is:
    GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
    GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
    GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
    GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

    // if (key == GLUT_KEY_F1)
    // {
    //     if(Musicon){
    //     Musicon=false;
    //     PlaySound(0,0,0);
    //     }
    //     else{
    //         Musicon = true;
    //         PlaySound("audio\\music.wav",NULL,SND_LOOP|SND_ASYNC);
    //     }
        
    // }
    // place your codes for other keys here
}

// Button related function
void touristbutton()
{
    tourist = 1;
    homepage = 0;
    Settings=0;
    about_us=0;
    reviewbutton=0;
}
void settingbutton()
{
    about_us=0;
    Settings = 1;
    homepage = 0;
    tourist = 0;
    reviewbutton=0;
}
void about_usbutton()
{
    about_us = 1;
    Settings = 0;
    tourist = 0;
    homepage = 0;
    reviewbutton=0;
}
void backbutton(){
    homepage=1;
    about_us = 0;
    Settings = 0;
    tourist = 0;
    reviewbutton=0;
}
void review(){
    reviewbutton=1;
    homepage=0;
    about_us = 0;
    Settings = 0;
    tourist = 0;
}
void backinbdbutton(){
    inbd=1;
    bdDhaka=0;
    bdctg=0;
    bdrajshahi=0;
    bdshylhet=0;
    bdkhulna=0;
    bdcumilla=0;
    bdbarishal=0;
}

void inbdbutton(){
    inbd=1;
    outbd=0;
    homepage=0;
    about_us = 0;
    Settings = 0;
    tourist = 0;
}
void outbdbutton(){
    outbd=1;
    inbd=0;
    homepage=0;
    about_us = 0;
    Settings = 0;
    tourist = 0;
}
void bdDhakabutton(){
    bdDhaka=1;
    inbd=0;
    homepage=0;
    about_us = 0;
    Settings = 0;
    tourist = 0;
}
void bdctgbutton(){
    bdctg=1;
    inbd=0;
    homepage=0;
    about_us = 0;
    Settings = 0;
    tourist = 0;
}
void bdrajshahibutton(){
    bdrajshahi=1;
    inbd=0;
    homepage=0;
    about_us = 0;
    Settings = 0;
    tourist = 0;
}
void bdshylhetbutton(){
    bdshylhet=1;
    inbd=0;
    homepage=0;
    about_us = 0;
    Settings = 0;
    tourist = 0;
}
void bdkhulnabutton(){
    bdkhulna=1;
    inbd=0;
    homepage=0;
    about_us = 0;
    Settings = 0;
    tourist = 0;
}
void bdcumillabutton(){
    bdcumilla=1;
    inbd=0;
    homepage=0;
    about_us = 0;
    Settings = 0;
    tourist = 0;
}
void bdbarishalbutton(){
    bdbarishal=1;
    inbd=0;
    homepage=0;
    about_us = 0;
    Settings = 0;
    tourist = 0;
}
void ctgranga(){
    ctgran=1;
    ctgsajek=0;
    ctgcox=0;
    ctgban=0;
    bdctg=0;ctgran=1;
    ctgsajek=0;
    ctgcox=0;
    ctgban=0;
}
void ctgbandar(){
    ctgran=0;
    ctgsajek=0;
    ctgcox=0;
    ctgban=1;
    bdctg=0;
}
void ctgcoxs(){
    ctgran=0;
    ctgsajek=0;
    ctgcox=1;
    ctgban=0;
    bdctg=0;
}
void ctgsaj(){
    ctgran=0;
    ctgsajek=1;
    ctgcox=0;
    ctgban=0;
    bdctg=0;
}
void dhakaahad(){
    dhakaaha=1;
    dhakalal=0;
    dhakasona=0;
    bdDhaka=0;
}
void dhakalald(){
    dhakaaha=0;
    dhakalal=1;
    dhakasona=0;
    bdDhaka=0;
}
void dhakasonad(){
    dhakaaha=0;
    dhakalal=0;
    dhakasona=1;
    bdDhaka=0;
}
void europe(){
    europee=1;
    outbd=0;
    inbd=0;
    homepage=0;
    about_us = 0;
    Settings = 0;
    tourist = 0;
}
void usa(){
    usaa=1;
    europee=0;
    russiaa=0;
    francea=0;
    australiaa=0;
}
void russia(){
    usaa=0;
    europee=0;
    russiaa=1;
    francea=0;
    australiaa=0;
}
void france(){
    usaa=0;
    europee=0;
    russiaa=0;
    francea=1;
    australiaa=0;
}
void australia(){
    usaa=0;
    europee=0;
    russiaa=0;
    francea=0;
    australiaa=1;
}
void usahotel(){
    usaa=0;
    usah=1;
}
void russiahotel(){
    russiaa=0;
    russiah=1;
}
void francehotel(){
    francea=0;
    franceh=1;
}
void aushotel(){
    australiaa=0;
    aush=1;
}

void usa1(){
    usa1p =1;
    usa2p =0;
    usa3p =0;
    usa4p =0;
    usah =0;
    usaa =0;
}
void usa2(){
    usa1p =0;
    usa2p =1;
    usa3p =0;
    usa4p =0;
    usah =0;
    usaa =0;
}
void usa3(){
    usa1p =0;
    usa2p =0;
    usa3p =1;
    usa4p =0;
    usah =0;
    usaa =0;
}
void usa4(){
    usa1p =0;
    usa2p =0;
    usa3p =0;
    usa4p =1;
    usah =0;
    usaa =0;
}
void russia1(){
    russia1p=1;
    russia2p=0;
    russia3p=0;
    russia4p=0;
    russiaa =0;
    russiah=0;
}
void russia2(){
    russia1p=0;
    russia2p=1;
    russia3p=0;
    russia4p=0;
    russiaa =0;
    russiah=0;
}
void russia3(){
    russia1p=0;
    russia2p=0;
    russia3p=1;
    russia4p=0;
    russiaa =0;
    russiah=0;
}
void russia4(){
    russia1p=0;
    russia2p=0;
    russia3p=0;
    russia4p=1;
    russiaa =0;
    russiah=0;
}
void france1(){
    france1p=1;
    france2p=0;
    france3p=0;
    france4p=0;
    francea=0;
    franceh=0;
}
void france2(){
    france1p=0;
    france2p=1;
    france3p=0;
    france4p=0;
    francea=0;
    franceh=0;
}
void france3(){
    france1p=0;
    france2p=0;
    france3p=1;
    france4p=0;
    francea=0;
    franceh=0;
}
void france4(){
    france1p=0;
    france2p=0;
    france3p=0;
    france4p=1;
    francea=0;
    franceh=0;
}
void aus1(){
    aus1p=1;
    aus2p=0;
    aus3p=0;
    aus4p=0;
    australiaa=0;
    aush=0;
}
void aus2(){
    aus1p=0;
    aus2p=1;
    aus3p=0;
    aus4p=0;
    australiaa=0;
    aush=0;
}
void aus3(){
    aus1p=0;
    aus2p=0;
    aus3p=1;
    aus4p=0;
    australiaa=0;
    aush=0;
}
void aus4(){
    aus1p=0;
    aus2p=0;
    aus3p=0;
    aus4p=1;
    australiaa=0;
    aush=0;
}

void asia(){
    asiaa=1;
    europee=0;
    outbd=0;
}
void tailand(){
    thai=1;
    maldiv=0;
    indiaa=0;
    indo=0;
    asiaa=0;
}
void maldives(){
    thai=0;
    maldiv=1;
    indiaa=0;
    indo=0;
    asiaa=0;
}
void indoneisa(){
    thai=0;
    maldiv=0;
    indiaa=0;
    indo=1;
    asiaa=0;
}
void india(){
    thai=0;
    maldiv=0;
    indiaa=1;
    indo=0;
    asiaa=0;
}


void thai1(){
    thai1p =1;
    thai2p =0;
    thai3p =0;
    taih =0;
    thai =0;
}
void thai2(){
    thai1p =0;
    thai2p =1;
    thai3p =0;
    taih =0;
    thai =0;
}
void thai3(){
    thai1p =0;
    thai2p =0;
    thai3p =1;
    taih =0;
    thai =0;
}


void maldiv1(){
    maldip1p =1;
    maldip2p =0;
    maldip3p =0;
    maldiph =0;
    maldiv =0;
}
void maldiv2(){
    maldip1p =0;
    maldip2p =1;
    maldip3p =0;
    maldiph =0;
    maldiv =0;
}
void maldiv3(){
    maldip1p =0;
    maldip2p =0;
    maldip3p =1;
    maldiph =0;
    maldiv =0;
}

void indo1(){
    indo1p=1;
    indo2p=0;
    indo3p=0;
    indoh=0;
    indo=0;
}
void indo2(){
    indo1p=0;
    indo2p=1;
    indo3p=0;
    indo=0;
    indoh=0;
}
void indo3(){
    indo1p=0;
    indo2p=0;
    indo3p=1;
    indo=0;
    indoh=0;
}

void india1(){
    india1p=1;
    india2p=0;
    india3p=0;
    indiaa=0;
    indiah=0;
}
void india2(){
    india1p=0;
    india2p=1;
    india3p=0;
    indiaa=0;
    indiah=0;
}
void india3(){
    india1p=0;
    india2p=0;
    india3p=1;
    indiaa=0;
    indiah=0;
}
void thaihotel(){
    thai=0;
    taih=1;
}
void indiahotel(){
    indiaa=0;
    indiah=1;
}
void maldivehotel(){
    maldiv=0;
    maldiph=1;
}
void indohotel(){
    indo=0;
    indoh=1;
}

void rajshahi1(){
    rajshahi1p=1;
    rajshahi2p=0;
    rajshahi3p=0;
    bdrajshahi=0;
    // rajshahih=0;
}
void rajshahi2(){
    rajshahi1p=0;
    rajshahi2p=1;
    rajshahi3p=0;
    bdrajshahi=0;
    // rajshahih=0;
}
void rajshahi3(){
    rajshahi1p=0;
    rajshahi2p=0;
    rajshahi3p=1;
    bdrajshahi=0;
    // rajshahih=0;
}

void sylhet1(){
    sylhet1p=1;
    sylhet2p=0;
    sylhet3p=0;
    bdshylhet=0;
    // sylheth=0;
}
void sylhet2(){
    sylhet1p=0;
    sylhet2p=1;
    sylhet3p=0;
    bdshylhet=0;
    // sylheth=0;
}
void sylhet3(){
    sylhet1p=0;
    sylhet2p=0;
    sylhet3p=1;
    bdshylhet=0;
    // sylheth=0;
}

void khulna1(){
    khulna1p=1;
    khulna2p=0;
    khulna3p=0;
    bdkhulna=0;
    // khulnah=0;
}
void khulna2(){
    khulna1p=0;
    khulna2p=1;
    khulna3p=0;
    bdkhulna=0;
    // khulnah=0;
}
void khulna3(){
    khulna1p=0;
    khulna2p=0;
    khulna3p=1;
    bdkhulna=0;
    // khulnah=0;
}
void cumilla1(){
    cumilla1p=1;
    cumilla2p=0;
    cumilla3p=0;
    bdcumilla=0;
    // cumillah=0;
}
void cumilla2(){
    cumilla1p=0;
    cumilla2p=1;
    cumilla3p=0;
    bdcumilla=0;
    // cumillah=0;
}
void cumilla3(){
    cumilla1p=0;
    cumilla2p=0;
    cumilla3p=1;
    bdcumilla=0;
    // cumillah=0;
}
void barishal1(){
    barishal1p=1;
    barishal2p=0;
    bdbarishal=0;
    // barishalh=0;
}
void barishal2(){
    barishal1p=0;
    barishal2p=1;
    bdbarishal=0;
    // barishalh=0;
}

void dhakahotel(){
    bdDhaka=0;
    dhakah=1;
}
void ctghotel(){
    bdctg=0;
    ctgh=1;
}
void rajshahihotel(){
    bdrajshahi=0;
    rajshahih=1;
}
void sylhethotel(){
    bdshylhet=0;
    sylheth=1;
}
void khulnahotel(){
    bdkhulna=0;
    khulnah=1;
}
void cumillahotel(){
    bdcumilla=0;
    cumillah=1;
}
void barishalhotel(){
    bdbarishal=0;
    barishalh=1;
}

void ureview(){
    reviewbutton=0;
    ureviewbutton=1;
}

void takereview(){
    reviewtake = 1;
    reviewbutton = 0;
}

void mapdhaka(){
    dhakam=1;
    bdDhaka=0;
    dhakalal=0;
    dhakah=0;
    dhakasona=0;
}
void mapctg(){
    ctgm=1;
    bdctg=0;
    ctgcox=0;
    ctgh=0;
    ctgran=0;
    ctgsajek=0;
    ctgban=0;
}
void mapsylhet(){
    sylhetm=1;
    bdshylhet=0;
    sylhet1p=0;
    sylhet2p=0;
    sylhet3p=0;
    // sylhetm=0;
}
void mapkhulna(){
    khulnam=1;
    bdkhulna=0;
    khulna1p=0;
    khulna2p=0;
    khulna3p=0;
    // khulnam=0;
}
void maprajshahi(){
    rajshahim=1;
    bdrajshahi=0;
    rajshahi1p=0; 
    rajshahi2p=0; 
    rajshahi3p=0;
    // rajshahim=0; 
    // start=0;
}
void mapcumilla(){
    cumillam=1;
    bdcumilla=0;
    cumilla1p=0;
    cumilla2p=0;
    cumilla3p=0;
    // cumillam=0;
}
void mapbarishal(){
    barishalm=1;
    bdbarishal=0;
    barishal1p=0;
    barishal2p=0;
    // barishalm=0;
}


void drawindo1(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\indonesia1.bmp",0);
}
void drawindo2(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\indonesia2.bmp",0);
}
void drawindo3(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\indonesia3.bmp",0);
}

void drawindia1(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\india1.bmp",0);
}
void drawindia2(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\india2.bmp",0);
}
void drawindia3(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\india3.bmp",0);
}
void drawindiahotel(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\indiahotel.bmp",0);
}
void drawindohotel(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\indonesiahotel.bmp",0);
}
void drawmaldiveshotel(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\maldiveshotel.bmp",0);
}
void drawthaihotel(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\thailandhotel.bmp",0);
}


void drawrajshahi1(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\rajshahi1.bmp",0);
}
void drawrajshahi2(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\rajshahi2.bmp",0);
}
void drawrajshahi3(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\rajshahi3.bmp",0);
}
void drawsylhet1(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\shylhet1.bmp",0);
}
void drawsylhet2(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\shylhet2.bmp",0);
}
void drawsylhet3(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\shylhet3.bmp",0);
}
void drawkhulna1(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\khulna1.bmp",0);
}
void drawkhulna2(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\khulna2.bmp",0);
}
void drawkhulna3(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\khulna3.bmp",0);
}
void drawcumilla1(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\cumilla1.bmp",0);
}
void drawcumilla2(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\cumilla2.bmp",0);
}
void drawcumilla3(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\cumilla3.bmp",0);
}
void drawbarishal1(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\barishal1.bmp",0);
}
void drawbarishal2(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\barishal2.bmp",0);
}

void drawdhakahotel(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\dhakah.bmp",0);
}
void drawctghotel(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\ctgh.bmp",0);
}
void drawrajshahihotel(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\rajshahih.bmp",0);
}
void drawsylhethotel(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\sylheth.bmp",0);
}
void drawkhulnahotel(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\khulnah.bmp",0);
}
void drawcumillahotel(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\cumillah.bmp",0);
}
void drawbarishalhotel(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\barishalh.bmp",0);
}
void drawreview(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\Slide1.bmp",0);
}

void drawureview(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\Slide2.bmp",0);
    iSetColor(255, 0, 0);
    char reviewstr1[100][10000];
    files = fopen("text1.txt", "r");
    int control=0;
    if(files != NULL)
    {
        while (!feof(files))
        {
            // printf("FIle open");
            fgets(reviewstr1[control],2000, files);
            // iText(109,445,reviewstr1[control],GLUT_BITMAP_TIMES_ROMAN_24);
            // printf("%s", reviewstr1);
            control++;
        }
    }
    fclose(files);
    int x=0;
    int xco=109,yco=445;
    for (int i = control-1; x<=5 ;i--)
    {
        // printf("%s",reviewstr1[i]);
        iText(xco,yco,reviewstr1[i],GLUT_BITMAP_TIMES_ROMAN_24);
        yco-=30;
        x++;
    }
}

void drawtakereview(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\takereview.bmp",0);
}

void drawmapdhaka(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\dhakamap.bmp",0); 
}
void drawmapctg(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\ctgmap.bmp",0); 
}
void drawmapkhulna(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\khulnamap.bmp",0); 
}
void drawmaprajshahi(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\rajshahimap.bmp",0); 
}
void drawmapcumilla(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\cumillamap.bmp",0); 
}
void drawmapbarishal(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\barishalmap.bmp",0); 
}
void drawmapsylhet(){
    iFilledRectangle(0,0,1136,592);
    iShowBMP2(0,0,"photo\\sylhetmap.bmp",0); 
}

void change(){
    index++;
}

int main()
{
    iSetTimer(303,change);
    if(playmusic){
        PlaySound("photo\\x.wav", NULL, SND_ASYNC | SND_LOOP);
    }
    iInitialize(1136, 592, "Virtual Tourist Guide");
    return 0;
}