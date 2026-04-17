#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


typedef struct {
	int w,a,d,s;
}ButtonKeys; ButtonKeys Keys;

int All_Textures[] = {
//32x32 size

0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 	
0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1,
0,0,0,1,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1,
0,0,1,1,1,1,1,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1,
0,0,0,1,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,1,0,0,0, 1,1,1,1,1,1,1,1,
0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1,
0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1,
0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1,

0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 	
0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1,
0,0,0,0,0,0,0,0, 1,1,1,0,1,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1,
0,0,0,1,1,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1,
0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1,
0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1,
0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1,
0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1,

0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 	
0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1,
0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1,
0,0,0,0,1,0,0,0, 1,1,1,1,0,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1,
0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,1,0,0, 1,1,1,1,1,1,1,1,
0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1,
0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1,
0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1,

0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 	
0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1,
0,0,0,1,0,0,0,0, 1,1,0,1,1,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1,
0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1,
0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1,
0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1,
0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1,
0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1,
	
	
	
	
	
};





#define PI 3.1415926535
#define P2 PI/2
#define P3 3*PI/2
#define DR 0.0174533 //one degree in radian

float degToRad(float a) { return a*M_PI/180.0;}
float FixAng(float a) { if(a>359){ a-=360;} if(a<0){ a+=360;} return a;}

float px,py,pdx,pdy,pa; //player position

void drawPlayer()
{
	glColor3d(1,1,0);
	glPointSize(8);
	glBegin(GL_POINTS);
	glVertex2i(px,py);
	glEnd();
	
	glLineWidth(2);
	glBegin(GL_LINES);
	glVertex2i(px,py);
	glVertex2i(px+pdx*5, py+pdy*5);
	glEnd();
}

int mapX=8,mapY=8,mapS=64;
int map[]=
{
	1,1,1,1,1,1,1,1,
	1,0,0,0,0,0,0,1,
	1,0,0,1,0,0,0,1,
	1,0,0,1,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,1,0,0,1,
	1,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
};

void drawMap2D()
{
	int x,y,xo,yo;
	for(y=0;y<mapY;y++)
	{
		for(x=0;x<mapX;x++)
		{
			if(map[y*mapX+x]==1) {glColor3f(0,0,1);} 
			else{glColor3f(1,1,1);}
			xo=x*mapS;
			yo=y*mapS;
			glBegin(GL_QUADS);
			glVertex2i(xo     +1, yo     +1);
			glVertex2i(xo     +1, yo+mapS-1);
			glVertex2i(xo+mapS-1, yo+mapS-1);
			glVertex2i(xo+mapS-1, yo+1     );
			glEnd();
		}
	}
}

float dist(float ax, float ay, float bx, float by, float ang)
 {
 	return (sqrt((bx-ax)*(bx-ax)+(by-ay)*(by-ay)));
 }

void drawRays3D()
{
	int r,mx,my,mp,dof;
	float rx,ry,ra,xo,yo,disT;
	ra=pa-DR*30;
	if(ra<0){
		 ra+= 2*PI;
	}
	if(ra>2*PI) {
		 ra-=2*PI;
	}
	
	for (r=0;r<60;r++) //60 rays, value can be increased or decreased
	{
		
		//HORIZONTAL RAYS
		float disH=1000000,hx=px,hy=py;
		dof=0;
		float aTan=-1/tan(ra);
		if(ra>PI){ ry=(((int)py>>6)<<6)-0.0001; rx=(py-ry)*aTan+px; yo=-64; xo=-yo*aTan; } //looking up
		if(ra<PI){ ry=(((int)py>>6)<<6)+64    ; rx=(py-ry)*aTan+px; yo= 64; xo=-yo*aTan; }
		if (ra==0 || ra==PI) { rx=px; ry=py; dof=8;}
		while(dof<8)
		{
			mx=(int)(rx)>>6;
			my=(int)(ry)>>6;
			mp=my*mapX+mx;
			if(mp>0 && mp<mapX*mapY && map[mp]>0){ hx=rx; hy=ry; disH=dist(px,py,hx,hy,ra); dof=8;} //hit vall.
			else{ rx+=xo; ry+= yo; dof+=1;}
		}
		/*
		glColor3f(0,1,0);
		glLineWidth(7);
		glBegin(GL_LINES);
		glVertex2i(px,py);
		glVertex2i(rx,ry);
		glEnd();
		*/
		
		
		//VERTICAL RAYS
		float disV=1000000, vx=px,vy=py;
		dof=0;
		float nTan=-tan(ra);
		if(ra>P2 && ra<P3){ rx=(((int)px>>6)<<6)-0.0001; ry=(px-rx)*nTan+py; xo=-64; yo=-xo*nTan; } //looking up
		if(ra<P2 || ra>P3){ rx=(((int)px>>6)<<6)+64    ; ry=(px-rx)*nTan+py; xo= 64; yo=-xo*nTan; }
		if (ra==0 || ra==PI) { rx=px; ry=py; dof=8;}
		while(dof<8)
		{
			mx=(int)(rx)>>6;
			my=(int)(ry)>>6;
			mp=my*mapX+mx;
			if(mp>0 && mp<mapX*mapY && map[mp]>0){ vx=rx; vy=ry; disV=dist(px,py,vx,vy,ra); dof=8;} //hit wall.
			else{ rx+=xo; ry+= yo; dof+=1;}
		}
		float shade=1;
		glColor3f(0,0.8,0);
		if(disV<disH){rx=vx; ry=vy; disT=disV; glColor3f(0.9,0,0);}
		if(disH<disV){rx=hx; ry=hy;disT=disH; glColor3f(0.6,0,0);}
		
		
		
		glLineWidth(3);
		glBegin(GL_LINES);
		glVertex2i(px,py);
		glVertex2i(rx,ry);
		glEnd();
		
		//--------3D WALLS--------
		
		float ca=pa-ra; if(ra<0){ra+=2*PI;} if(ra>2*PI){ra-=2*PI;} disT=disT*cos(ca);
		float lineH=(mapS*320)/disT;
		float ty_step=32.0/(float)lineH;
		float ty_off=0;
		
		if(lineH>320){ lineH=320;}
		float lineO=160-lineH/2;  //line Offset
		
		int y;
		float ty=ty_off*ty_step;
		if(shade==1){tx=(int)(rx/2.0)%32; if(ra>90 && ra<270) {tx=31-tx;}
		// float tx=(int)(ry/2.0)%32;
		else tx=(int)(ry/2.0)%32; if(ra>90 && ra<270) {tx=31-tx;}
		for(y=0;y<lineH;y++){
			
			float c = All_Textures[(int)(ty)*32 + (int)(tx)]*shade;
			glColor3f(c,c,c);
			
			glPointSize(8);
			glBegin(GL_POINTS);
			glVertex2i(r*8+530,y+lineO);
			glEnd();
			ty+=ty_step;
		}
		
		
		
		
		ra+=DR;
		if(ra<0){ra+= 2*PI;}
		if(ra>2*PI){ra-=2*PI;}
	}	
	
	
	
}

void ButtonDown(unsigned char key, int x, int y){
	if (key =='a') { Keys.a=1;}
	if (key =='d') { Keys.d=1;}
	if (key =='w') { Keys.w=1;}
	if (key =='s') { Keys.s=1;}
	glutPostRedisplay();
}

void ButtonUp(unsigned char key, int x, int y){
	if (key =='a') { Keys.a=0;}
	if (key =='d') { Keys.d=0;}
	if (key =='w') { Keys.w=0;}
	if (key =='s') { Keys.s=0;}
	glutPostRedisplay();
}

void resize(int w, int h) {
	glutReshapeWindow(1024,512);
}

void init()
{
	glClearColor(0.3,0.3,0.3,0);
	gluOrtho2D(0,1024,512,0);
	px=300;
	py=300;
	pdx=cos(pa)*5;
	pdy=sin(pa)*5;
	
}

float frame1,frame2,fps; 



void display()
{
	//frames per second(FPS)
	frame2=glutGet(GLUT_ELAPSED_TIME);
	fps = (frame2-frame1);
	frame1 = glutGet(GLUT_ELAPSED_TIME);
	
	//Frame time cap, just in case
	if(fps > 100) {
		fps = 100;
	}
	
	// || Buttons ||
	//The sensitivity is a bit of a mess but works well
	if(Keys.a==1) { pa-=0.003*fps; if(pa<   0){ pa+=2*PI;} pdx=cos(pa) *5; pdy=sin(pa)*5;}
	if(Keys.d==1) { pa+=0.003*fps; if(pa>2*PI){ pa-=2*PI;} pdx=cos(pa) *5; pdy=sin(pa)*5;}
	
	int xo = 0; if(pdx<0) {xo=-20;} else{ xo=20;}
	int yo = 0; if(pdy<0) {yo=-20;} else{ yo=20;}
	
	int ipx=px/64.0;
	int ipx_add_xo = (px+xo)/64.0; 
	int ipx_sub_xo = (px-xo)/64.0;
	
	int ipy=py/64.0;
	int ipy_add_yo = (py+yo)/64.0;
	int ipy_sub_yo = (py-yo)/64.0;
	
	
	
	if(Keys.w==1){ 
		if(map[ipy*mapX        + ipx_add_xo] == 0) { px+=pdx*0.02*fps;}
		if(map[ipy_add_yo*mapX + ipx       ] == 0) { py+=pdy*0.02*fps;}
	}
	
	if(Keys.s==1){ 
		if(map[ipy*mapX        + ipx_sub_xo] == 0) { px-=pdx*0.02*fps;}
		if(map[ipy_sub_yo*mapX + ipx       ] == 0) { py-=pdy*0.02*fps;}
	}
	
	
	glutPostRedisplay();
	
	
	glClear (GL_COLOR_BUFFER_BIT);
	drawMap2D();
	drawPlayer();
	drawRays3D();
	glutSwapBuffers();
	
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(1024, 512);
	glutInitWindowPosition(200,200);
	glutCreateWindow("Wolfenstein");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(resize);
	glutKeyboardFunc(ButtonDown);
	glutKeyboardUpFunc(ButtonUp);
	glutMainLoop();
}
