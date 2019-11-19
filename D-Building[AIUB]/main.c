#include<windows.h>
#include<GL/glut.h>

void display(){

    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    //Front
    glColor3ub(137,138,141);
    glBegin(GL_QUADS);
    glVertex2f(-.6,.4);//A
    glVertex2f(-.6,-.4);//B
    glVertex2f(.2,-.4);//C
    glVertex2f(.2,.4);//D
    glEnd();
    glColor3ub(125,114,77);
    glBegin(GL_QUADS);
    glVertex2f(-.6,-.4);//A
    glVertex2f(-.6,-.5);//B
    glVertex2f(.5,-.5);//C
    glVertex2f(.45,-.4);//D
    glEnd();

    glColor3ub(85,85,85);
    glBegin(GL_QUADS);
    glVertex2f(.45,.2);//A
    glVertex2f(.45,-.4);//B
    glVertex2f(.2,-.4);//C
    glVertex2f(.2,.2);//D



    //Side
    glColor3ub(40,41,36);
    glBegin(GL_QUADS);
    glVertex2f(-.6,.4);
    glVertex2f(-.6,-.4);//D
    glVertex2f(-.8,-.5);//B
    glVertex2f(-.8,.3);
    glEnd();
    glColor3ub(68,68,62);
    glBegin(GL_QUADS);
    glVertex2f(-.8,-.5);//A
    glVertex2f(-.8,-.6);//B
    glVertex2f(-.6,-.5);//C
    glVertex2f(-.6,-.4);//D
    glEnd();


    //Side Window
    glColor3ub(40,128,153);
    glBegin(GL_QUADS);
    glVertex2f(-.755,-.355);//A
    glVertex2f(-.755,-.455);//B
    glVertex2f(-.655,-.4);//C
    glVertex2f(-.655,-.3);//D
    glEnd();


    glColor3ub(40,128,153);
    glBegin(GL_QUADS);
    glVertex2f(-.755,-.155);//A
    glVertex2f(-.755,-.255);//B
    glVertex2f(-.655,-.2);//C
    glVertex2f(-.655,-.1);//D
    glEnd();

    //Stairs
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(-.5,-.4);//A
    glVertex2f(-.57,-.5);//B
    glVertex2f(-.32,-.5);//C
    glVertex2f(-.4,-.4);//D
    glEnd();

    //Door
    glColor3ub(30,191,225);
    glBegin(GL_QUADS);
    glVertex2f(-.5,-.4);//A
    glVertex2f(-.5,-.25);//B
    glVertex2f(-.4,-.25);//D
    glVertex2f(-.4,-.4);//C
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.45,-.25);
    glVertex2f(-.45,-.4);
    glEnd();

    //Front Window
    //1st floor
    glColor3ub(30,191,225);
    glBegin(GL_QUADS);
    glVertex2f(-.35,-.35);//A
    glVertex2f(-.35,-.26);//B
    glVertex2f(0.15,-.26);//D
    glVertex2f(0.15,-.35);//C
    glEnd();
    //2nd floor
    glColor3ub(30,191,225);
    glBegin(GL_QUADS);
    glVertex2f(-.5,-.12);//A
    glVertex2f(-.5,-.20);//B
    glVertex2f(0.15,-.20);//D
    glVertex2f(0.15,-.12);//C
    glEnd();

    //3rd floor
    glColor3ub(30,191,225);
    glBegin(GL_QUADS);
    glVertex2f(-.55,-.01);//D
    glVertex2f(-.55,-.08);//B
    glVertex2f(0.15,-.08);//D
    glVertex2f(0.15,-.01);//A
    glEnd();


    glColor3ub(0,128,255);
    glBegin(GL_QUADS);
    glVertex2f(.25,.1);//A
    glVertex2f(.25,-.2);//B
    glVertex2f(.3,-.2);//C
    glVertex2f(.3,.1);//D
    glEnd();

    glColor3ub(0,128,255);
    glBegin(GL_QUADS);
    glVertex2f(.35,.1);//A
    glVertex2f(.35,-.2);//B
    glVertex2f(.4,-.2);//C
    glVertex2f(.4,.1);//D
    glEnd();

    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(.25,-.27);//A
    glVertex2f(.25,-.4);//B
    glVertex2f(.4,-.4);//C
    glVertex2f(.4,-.27);//D
    glEnd();


     //A
    glBegin(GL_LINES);
    glColor3f(0,0,1);
    glVertex2f(-.5,.42);
    glVertex2f(-.4,.68);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,1);
    glVertex2f(-.4,.68);
    glVertex2f(-.3,.42);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,1);
    glVertex2f(-.45,.55);
    glVertex2f(-.35,.55);
    glEnd();

    //I
    glBegin(GL_LINES);
    glColor3f(0,0,1);
    glVertex2f(-.2,.42);
    glVertex2f(-.2,.68);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,1);
    glVertex2f(-.25,.42);
    glVertex2f(-.15,.42);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,1);
    glVertex2f(-.25,.68);
    glVertex2f(-.15,.68);
    glEnd();

    //U
    glBegin(GL_LINES);
    glColor3f(0,0,1);
    glVertex2f(-.1,.42);
    glVertex2f(-.1,.68);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,1);
    glVertex2f(-.1,.42);
    glVertex2f(.1,.42);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,1);
    glVertex2f(.1,.42);
    glVertex2f(.1,.68);
    glEnd();

    //B
    glBegin(GL_LINES);
    glColor3f(0,0,1);
    glVertex2f(.2,.42);
    glVertex2f(.2,.68);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0,0,1);
    glVertex2f(.2,.42);
    glVertex2f(.3,.49);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,1);
    glVertex2f(.3,.49);
    glVertex2f(.2,.56);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,1);
    glVertex2f(.2,.56);
    glVertex2f(.3,.63);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,1);
    glVertex2f(.2,.68);
    glVertex2f(.3,.63);
    glEnd();



    glFlush();
}

int main(int argc,char** argv){

    glutInit(&argc, argv);
	glutInitWindowSize(1280,720);
	glutInitWindowPosition(0,0);
	glutCreateWindow("AIUB | D-Building");
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
