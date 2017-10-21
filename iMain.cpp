#include "iGraphics.h"
#include<bits/stdc++.h>
#include "circle.h"

using namespace std;

int x=0,y=0,j=3,d=2;

int algo[100]={};

//flag for sieve

int m_f1=0;
int semi_flag=0;

int flag1=0;

void sieve();
void bubble_sort();
void screen();

void timer(){

    if(m_f1==1){
        j++;
        while(j%d){
            j++;
        }
        algo[j-1]=d;

        if(j>=100 && d==2){
            d=3;
            j=8;

        }
        else if(j>=100 && d==3){
            d=5;
            j=24;
        }
        else if(j>=100 && d==5){
            d=7;
            j=48;
        }
        else if(j>=100 && d==7){
            flag1=1;
        }

    }
}

int a_1=0,b_1=600,c_1=60,d_1=540,e_1=0,f_1=540,g_1=60,h_1=600; // 1 is not a prime
int a_2=180,b_2=600,c_2=240,d_2=540,e_2=180,f_2=540,g_2=240,h_2=600; // for multiple of 2
int a_3=480,b_3=600,c_3=540,d_3=540,e_3=480,f_3=540,g_3=540,h_3=600; // for multiple of 3
int a_5=240,b_5=480,c_5=300,d_5=420,e_5=240,f_5=420,g_5=300,h_5=480; // for multiple of 5
int a_7=480,b_7=360,c_7=540,d_7=300,e_7=480,f_7=300,g_7=540,h_7=360; // for multiple of 7

// flag for bubble
int bf=0;

/**** code starts ****/

void iDraw() {

    iClear();

    if(m_f1==0) screen();

    else if(m_f1==1) sieve();

    else if(m_f1==2) bubble_sort();

}

void screen(){

        iClear();

        iSetColor(255,255,0);

        iText(230,450,"Welcome to Algorithm Visualization Tool",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(15,100,"Created By:",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(10,70," Tanjim Bin Faruk (1505082)",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(10,40," Tanjim Munir Dipon (1505083)",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(550,110,"Project Supervisor:",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(550,80,"Mohammad Kaysar Abdullah",GLUT_BITMAP_TIMES_ROMAN_24);

        iSetColor(255,0,0);
        iRectangle(275,370,320,50);
        iSetColor(0,255,0);
        iText(350,385,"A. Algorithm List ",GLUT_BITMAP_TIMES_ROMAN_24);
        if(semi_flag==0){
            iSetColor(255,0,0);
            iRectangle(275,280,320,50);
            iSetColor(0,255,0);
            iText(350,300,"B. Quit ",GLUT_BITMAP_TIMES_ROMAN_24);
        }
        else if(semi_flag==1){

            iSetColor(255,0,0);
            iRectangle(275,200,320,50);
            iSetColor(0,255,0);
            iText(350,220,"B. Quit ",GLUT_BITMAP_TIMES_ROMAN_24);
            iSetColor(255,0,255);
            iText(350,335,"1. Sieve Algorithm ",GLUT_BITMAP_TIMES_ROMAN_24);
            iText(350,285,"2. Bubble Sort Algorithm ",GLUT_BITMAP_TIMES_ROMAN_24);
        }
}

void sieve(){

    iClear();

    int i;

    iSetColor(176,224,230);

    iText(610,570,"Sieve Algorithm Visualization",GLUT_BITMAP_HELVETICA_18);
    iText(610,530,"(Prime Number Generator)",GLUT_BITMAP_HELVETICA_18);

    iSetColor(255,255,255);
    iFilledRectangle(0,0,600,600);

	for(y=0;y<=540;y+=60){
            iSetColor(255,0,0);
        for(x=0;x<=540;x+=60){
            iRectangle(x,y,60,60);
        }
	}

	circle(algo);

    iSetColor(0,0,0);


    iText(25,570,"1",GLUT_BITMAP_HELVETICA_18);
    iText(85,570,"2",GLUT_BITMAP_HELVETICA_18);
    iText(145,570,"3",GLUT_BITMAP_HELVETICA_18);
    iText(205,570,"4",GLUT_BITMAP_HELVETICA_18);
    iText(265,570,"5",GLUT_BITMAP_HELVETICA_18);
    iText(325,570,"6",GLUT_BITMAP_HELVETICA_18);
    iText(385,570,"7",GLUT_BITMAP_HELVETICA_18);
    iText(445,570,"8",GLUT_BITMAP_HELVETICA_18);
    iText(505,570,"9",GLUT_BITMAP_HELVETICA_18);
    iText(560,570,"10",GLUT_BITMAP_HELVETICA_18);

    //row 2

    iText(20,510,"11",GLUT_BITMAP_HELVETICA_18);
    iText(80,510,"12",GLUT_BITMAP_HELVETICA_18);
    iText(140,510,"13",GLUT_BITMAP_HELVETICA_18);
    iText(200,510,"14",GLUT_BITMAP_HELVETICA_18);
    iText(260,510,"15",GLUT_BITMAP_HELVETICA_18);
    iText(320,510,"16",GLUT_BITMAP_HELVETICA_18);
    iText(380,510,"17",GLUT_BITMAP_HELVETICA_18);
    iText(440,510,"18",GLUT_BITMAP_HELVETICA_18);
    iText(500,510,"19",GLUT_BITMAP_HELVETICA_18);
    iText(560,510,"20",GLUT_BITMAP_HELVETICA_18);

    //row 3

    iText(20,450,"21",GLUT_BITMAP_HELVETICA_18);
    iText(80,450,"22",GLUT_BITMAP_HELVETICA_18);
    iText(140,450,"23",GLUT_BITMAP_HELVETICA_18);
    iText(200,450,"24",GLUT_BITMAP_HELVETICA_18);
    iText(260,450,"25",GLUT_BITMAP_HELVETICA_18);
    iText(320,450,"26",GLUT_BITMAP_HELVETICA_18);
    iText(380,450,"27",GLUT_BITMAP_HELVETICA_18);
    iText(440,450,"28",GLUT_BITMAP_HELVETICA_18);
    iText(500,450,"29",GLUT_BITMAP_HELVETICA_18);
    iText(560,450,"30",GLUT_BITMAP_HELVETICA_18);

    //row 4

    iText(20,390,"31",GLUT_BITMAP_HELVETICA_18);
    iText(80,390,"32",GLUT_BITMAP_HELVETICA_18);
    iText(140,390,"33",GLUT_BITMAP_HELVETICA_18);
    iText(200,390,"34",GLUT_BITMAP_HELVETICA_18);
    iText(260,390,"35",GLUT_BITMAP_HELVETICA_18);
    iText(320,390,"36",GLUT_BITMAP_HELVETICA_18);
    iText(380,390,"37",GLUT_BITMAP_HELVETICA_18);
    iText(440,390,"38",GLUT_BITMAP_HELVETICA_18);
    iText(500,390,"39",GLUT_BITMAP_HELVETICA_18);
    iText(560,390,"40",GLUT_BITMAP_HELVETICA_18);

    //row 5

    iText(20,330,"41",GLUT_BITMAP_HELVETICA_18);
    iText(80,330,"42",GLUT_BITMAP_HELVETICA_18);
    iText(140,330,"43",GLUT_BITMAP_HELVETICA_18);
    iText(200,330,"44",GLUT_BITMAP_HELVETICA_18);
    iText(260,330,"45",GLUT_BITMAP_HELVETICA_18);
    iText(320,330,"46",GLUT_BITMAP_HELVETICA_18);
    iText(380,330,"47",GLUT_BITMAP_HELVETICA_18);
    iText(440,330,"48",GLUT_BITMAP_HELVETICA_18);
    iText(500,330,"49",GLUT_BITMAP_HELVETICA_18);
    iText(560,330,"50",GLUT_BITMAP_HELVETICA_18);

    //row 6

    iText(20,270,"51",GLUT_BITMAP_HELVETICA_18);
    iText(80,270,"52",GLUT_BITMAP_HELVETICA_18);
    iText(140,270,"53",GLUT_BITMAP_HELVETICA_18);
    iText(200,270,"54",GLUT_BITMAP_HELVETICA_18);
    iText(260,270,"55",GLUT_BITMAP_HELVETICA_18);
    iText(320,270,"56",GLUT_BITMAP_HELVETICA_18);
    iText(380,270,"57",GLUT_BITMAP_HELVETICA_18);
    iText(440,270,"58",GLUT_BITMAP_HELVETICA_18);
    iText(500,270,"59",GLUT_BITMAP_HELVETICA_18);
    iText(560,270,"60",GLUT_BITMAP_HELVETICA_18);

    // row 7

    iText(20,210,"61",GLUT_BITMAP_HELVETICA_18);
    iText(80,210,"62",GLUT_BITMAP_HELVETICA_18);
    iText(140,210,"63",GLUT_BITMAP_HELVETICA_18);
    iText(200,210,"64",GLUT_BITMAP_HELVETICA_18);
    iText(260,210,"65",GLUT_BITMAP_HELVETICA_18);
    iText(320,210,"66",GLUT_BITMAP_HELVETICA_18);
    iText(380,210,"67",GLUT_BITMAP_HELVETICA_18);
    iText(440,210,"68",GLUT_BITMAP_HELVETICA_18);
    iText(500,210,"69",GLUT_BITMAP_HELVETICA_18);
    iText(560,210,"70",GLUT_BITMAP_HELVETICA_18);

    //row 8

    iText(20,150,"71",GLUT_BITMAP_HELVETICA_18);
    iText(80,150,"72",GLUT_BITMAP_HELVETICA_18);
    iText(140,150,"73",GLUT_BITMAP_HELVETICA_18);
    iText(200,150,"74",GLUT_BITMAP_HELVETICA_18);
    iText(260,150,"75",GLUT_BITMAP_HELVETICA_18);
    iText(320,150,"76",GLUT_BITMAP_HELVETICA_18);
    iText(380,150,"77",GLUT_BITMAP_HELVETICA_18);
    iText(440,150,"78",GLUT_BITMAP_HELVETICA_18);
    iText(500,150,"79",GLUT_BITMAP_HELVETICA_18);
    iText(560,150,"80",GLUT_BITMAP_HELVETICA_18);

    //row 9

    iText(20,90,"81",GLUT_BITMAP_HELVETICA_18);
    iText(80,90,"82",GLUT_BITMAP_HELVETICA_18);
    iText(140,90,"83",GLUT_BITMAP_HELVETICA_18);
    iText(200,90,"84",GLUT_BITMAP_HELVETICA_18);
    iText(260,90,"85",GLUT_BITMAP_HELVETICA_18);
    iText(320,90,"86",GLUT_BITMAP_HELVETICA_18);
    iText(380,90,"87",GLUT_BITMAP_HELVETICA_18);
    iText(440,90,"88",GLUT_BITMAP_HELVETICA_18);
    iText(500,90,"89",GLUT_BITMAP_HELVETICA_18);
    iText(560,90,"90",GLUT_BITMAP_HELVETICA_18);

    //row 10

    iText(20,30,"91",GLUT_BITMAP_HELVETICA_18);
    iText(80,30,"92",GLUT_BITMAP_HELVETICA_18);
    iText(140,30,"93",GLUT_BITMAP_HELVETICA_18);
    iText(200,30,"94",GLUT_BITMAP_HELVETICA_18);
    iText(260,30,"95",GLUT_BITMAP_HELVETICA_18);
    iText(320,30,"96",GLUT_BITMAP_HELVETICA_18);
    iText(380,30,"97",GLUT_BITMAP_HELVETICA_18);
    iText(440,30,"98",GLUT_BITMAP_HELVETICA_18);
    iText(500,30,"99",GLUT_BITMAP_HELVETICA_18);
    iText(555,30,"100",GLUT_BITMAP_HELVETICA_18);


    if(flag1==1){
        iText(610,480,"Prime Numbers (Upto 100)",GLUT_BITMAP_HELVETICA_18);

        iSetColor(255,255,255);
        iText(610,480,"2 ",GLUT_BITMAP_HELVETICA_18);
        iText(660,480,"3 ",GLUT_BITMAP_HELVETICA_18);
        iText(710,480,"5 ",GLUT_BITMAP_HELVETICA_18);
        iText(760,480,"7 ",GLUT_BITMAP_HELVETICA_18);
        iText(610,440,"11 ",GLUT_BITMAP_HELVETICA_18);
        iText(660,440,"13 ",GLUT_BITMAP_HELVETICA_18);
        iText(710,440,"17 ",GLUT_BITMAP_HELVETICA_18);
        iText(760,440,"19 ",GLUT_BITMAP_HELVETICA_18);
        iText(610,400,"23 ",GLUT_BITMAP_HELVETICA_18);
        iText(660,400,"29 ",GLUT_BITMAP_HELVETICA_18);
        iText(710,400,"31 ",GLUT_BITMAP_HELVETICA_18);
        iText(760,400,"37 ",GLUT_BITMAP_HELVETICA_18);
        iText(610,360,"41 ",GLUT_BITMAP_HELVETICA_18);
        iText(660,360,"43 ",GLUT_BITMAP_HELVETICA_18);
        iText(710,360,"47 ",GLUT_BITMAP_HELVETICA_18);
        iText(760,360,"53 ",GLUT_BITMAP_HELVETICA_18);
        iText(610,320,"59 ",GLUT_BITMAP_HELVETICA_18);
        iText(660,320,"61 ",GLUT_BITMAP_HELVETICA_18);
        iText(710,320,"67 ",GLUT_BITMAP_HELVETICA_18);
        iText(760,320,"71 ",GLUT_BITMAP_HELVETICA_18);
        iText(610,280,"73 ",GLUT_BITMAP_HELVETICA_18);
        iText(660,280,"79 ",GLUT_BITMAP_HELVETICA_18);
        iText(710,280,"83 ",GLUT_BITMAP_HELVETICA_18);
        iText(760,280,"89 ",GLUT_BITMAP_HELVETICA_18);
        iText(610,240,"97 ",GLUT_BITMAP_HELVETICA_18);

        iText(610,190,"* Brown circles are primes.",GLUT_BITMAP_HELVETICA_18);
        iText(610,150,"* Other circles are composites.",GLUT_BITMAP_HELVETICA_18);

        iSetColor(255,255,255);
        iRectangle(615,25,250,110);

        iSetColor(255,127,80);
        iText(635,100,"-->Next Algorithm",GLUT_BITMAP_HELVETICA_18);
        iText(635,60,"-->Quit",GLUT_BITMAP_HELVETICA_18);

    }

}

void bubble_sort(){

        iClear();

        iSetColor(0,255,255);
        iText(300,550," Bubble Sort Algorithm ",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(270,500," ( Example shown with 7 elements ) ",GLUT_BITMAP_HELVETICA_18);

        iSetColor(255,255,0);

        for(int i=0;i<7;i++){
            iRectangle(200+70*i,300,70,80);
        }

        iSetColor(0,255,0);

    if(bf==0){
        iText(230,330,"7",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(300,330,"2",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(370,330,"1",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(440,330,"6",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(510,330,"3",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(580,330,"4",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(650,330,"5",GLUT_BITMAP_TIMES_ROMAN_24);
    }
    else if(bf==1){
        iSetColor(255,215,0);
        iText(230,420," After sorting, the elements will look like this: ",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(0,255,0);
        iText(230,330,"1",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(300,330,"2",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(370,330,"3",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(440,330,"4",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(510,330,"5",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(580,330,"6",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(650,330,"7",GLUT_BITMAP_TIMES_ROMAN_24);

    }
    else if(bf==2){
        iSetColor(255,215,0);
        iText(350,420," Process Begins ",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(0,255,0);
        iText(230,330,"7",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(300,330,"2",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(370,330,"1",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(440,330,"6",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(510,330,"3",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(580,330,"4",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(650,330,"5",GLUT_BITMAP_TIMES_ROMAN_24);
    }
    else if(bf==3){
        iSetColor(255,215,0);
        iText(330,420," Swapping of index (1,2) ",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(0,255,0);
        iSetColor(255,0,0);
        iFilledCircle(235,340,25);
        iSetColor(0,0,0);
        iText(230,330,"7",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(255,0,0);
        iFilledCircle(305,340,25);
        iSetColor(0,0,0);
        iText(300,330,"2",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(0,255,0);
        iText(370,330,"1",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(440,330,"6",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(510,330,"3",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(580,330,"4",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(650,330,"5",GLUT_BITMAP_TIMES_ROMAN_24);
    }
    else if(bf==4){
        iSetColor(255,215,0);
        iText(330,420,"Index (1,2) swapped ",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(0,255,0);
        iText(230,330,"2",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(300,330,"7",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(370,330,"1",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(440,330,"6",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(510,330,"3",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(580,330,"4",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(650,330,"5",GLUT_BITMAP_TIMES_ROMAN_24);
    }
    else if(bf==5){
        iSetColor(255,215,0);
        iText(330,420," Swapping of index (1,3) ",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(255,0,0);
        iFilledCircle(235,340,25);
        iSetColor(0,0,0);
        iText(230,330,"2",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(255,0,0);
        iFilledCircle(375,340,25);
        iSetColor(0,0,0);
        iText(370,330,"1",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(0,255,0);
        iText(300,330,"7",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(440,330,"6",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(510,330,"3",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(580,330,"4",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(650,330,"5",GLUT_BITMAP_TIMES_ROMAN_24);
    }
    else if(bf==6){
        iSetColor(255,215,0);
        iText(330,420," Index (1,3) swapped ",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(0,255,0);
        iText(230,330,"1",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(300,330,"7",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(370,330,"2",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(440,330,"6",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(510,330,"3",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(580,330,"4",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(650,330,"5",GLUT_BITMAP_TIMES_ROMAN_24);
    }
    else if(bf==7){
        iSetColor(255,215,0);
        iText(330,420," Swapping of index (2,3) ",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(0,255,0);
        iText(230,330,"1",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(255,0,0);
        iFilledCircle(305,340,25);
        iSetColor(0,0,0);
        iText(300,330,"7",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(255,0,0);
        iFilledCircle(375,340,25);
        iSetColor(0,0,0);
        iText(370,330,"2",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(0,255,0);
        iText(440,330,"6",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(510,330,"3",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(580,330,"4",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(650,330,"5",GLUT_BITMAP_TIMES_ROMAN_24);
    }
    else if(bf==8){
        iSetColor(255,215,0);
        iText(330,420," Index (2,3) swapped ",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(0,255,0);
        iText(230,330,"1",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(300,330,"2",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(370,330,"7",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(440,330,"6",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(510,330,"3",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(580,330,"4",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(650,330,"5",GLUT_BITMAP_TIMES_ROMAN_24);
    }
    else if(bf==9){
        iSetColor(255,215,0);
        iText(330,420," Swapping of index (3,5) ",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(0,255,0);
        iText(230,330,"1",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(300,330,"2",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(255,0,0);
        iFilledCircle(375,340,25);
        iSetColor(0,0,0);
        iText(370,330,"7",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(255,0,0);
        iFilledCircle(515,340,25);
        iSetColor(0,0,0);
        iText(510,330,"3",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(0,255,0);
        iText(440,330,"6",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(580,330,"4",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(650,330,"5",GLUT_BITMAP_TIMES_ROMAN_24);
    }
    else if(bf==10){
        iSetColor(255,215,0);
        iText(330,420," Index (3,5) swapped ",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(0,255,0);
        iText(230,330,"1",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(300,330,"2",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(370,330,"3",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(440,330,"6",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(510,330,"7",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(580,330,"4",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(650,330,"5",GLUT_BITMAP_TIMES_ROMAN_24);
    }
    else if(bf==11){
        iSetColor(255,215,0);
        iText(330,420," Swapping of index (4,6) ",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(0,255,0);
        iText(230,330,"1",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(300,330,"2",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(370,330,"3",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(255,0,0);
        iFilledCircle(445,340,25);
        iSetColor(0,0,0);
        iText(440,330,"6",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(0,255,0);
        iText(510,330,"7",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(255,0,0);
        iFilledCircle(585,340,25);
        iSetColor(0,0,0);
        iText(580,330,"4",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(0,255,0);
        iText(650,330,"5",GLUT_BITMAP_TIMES_ROMAN_24);
    }
    else if(bf==12){
        iSetColor(255,215,0);
        iText(330,420," Index (4,6) swapped ",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(0,255,0);
        iText(230,330,"1",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(300,330,"2",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(370,330,"3",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(440,330,"4",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(510,330,"7",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(580,330,"6",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(650,330,"5",GLUT_BITMAP_TIMES_ROMAN_24);
    }
    else if(bf==13){
        iSetColor(255,215,0);
        iText(330,420," Swapping of index (5,7) ",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(0,255,0);
        iText(230,330,"1",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(300,330,"2",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(370,330,"3",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(440,330,"4",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(255,0,0);
        iFilledCircle(515,340,25);
        iSetColor(0,0,0);
        iText(510,330,"7",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(0,255,0);
        iText(580,330,"6",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(255,0,0);
        iFilledCircle(655,340,25);
        iSetColor(0,0,0);
        iText(650,330,"5",GLUT_BITMAP_TIMES_ROMAN_24);
    }
    else if(bf==14){
        iSetColor(255,215,0);
        iText(330,420," Sorting Complete ",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(0,255,0);
        iText(230,330,"1",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(300,330,"2",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(370,330,"3",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(440,330,"4",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(510,330,"5",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(580,330,"6",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(650,330,"7",GLUT_BITMAP_TIMES_ROMAN_24);
    }
    else if(bf==15){
        iSetColor(255,215,0);
        iText(330,420," Sorting Complete ",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(0,255,0);
        iText(230,330,"1",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(300,330,"2",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(370,330,"3",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(440,330,"4",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(510,330,"5",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(580,330,"6",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(650,330,"7",GLUT_BITMAP_TIMES_ROMAN_24);


        iSetColor(255,0,255);
        iRectangle(370,150,110,50);

        iSetColor(0,191,255);

        iText(400,170,"Quit",GLUT_BITMAP_TIMES_ROMAN_24);
    }
}


void bubble(){
    if(m_f1==2 && bf<=14) bf++;
}

void iMouseMove(int mx, int my) {
	//printf("x = %d, y= %d\n",mx,my);
	//place your codes here
}


void iMouse(int button, int state, int mx, int my) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=350 && mx<=670 && my>=370 && my<=420 && m_f1==0 && semi_flag==0) semi_flag=1;

    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && m_f1==0 && semi_flag==1) {

        if(mx>=350 && mx<=480 && my>=330 && my<=350) m_f1=1;

        else if(mx>=350 && mx<=550 && my>=280 && my<=305) m_f1=2;
	}

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && m_f1==0){
        if(semi_flag==0)
            if(mx>=275 && mx<=(595) && my>=280 && my<=(330)) exit(1);

        else
            if(mx>=275 && mx<=(595) && my>=130 && my<=(180)) exit(1);
	}

	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && m_f1==1){
        if(mx>=610 && mx<=850 && my>=90 && my<=110) m_f1=2;

        else if(mx>=635 && mx<=850 && my>=50 && my<=70) exit(1);
	}

	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && m_f1==2){

        if(mx>=380 && mx<=500 && my>=150 && my<=180) exit(1);
	}
}


void iKeyboard(unsigned char key) {
	if (key == 'q') {
		exit(0);
	}
	//place your codes for other keys here
}

void iSpecialKeyboard(unsigned char key) {

	if (key == GLUT_KEY_END) {
		exit(0);
	}
}


int main() {
	//place your own initialization codes here.

    iSetTimer(700,timer);
    iSetTimer(5000,bubble);
	iInitialize(880, 600, "demo");

	return 0;
}
