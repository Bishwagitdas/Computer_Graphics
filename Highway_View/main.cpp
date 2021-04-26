#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>
# define PI           3.14159265358979323846
bool dayOn = true;
bool nightOn = false;

GLfloat bus1Position = 0.0f;
GLfloat bus2Position = 0.0f;
GLfloat bus3Position = 0.0f;
GLfloat cloudPosition = 0.0f;


GLfloat bus1Speed = 0.0f;
GLfloat bus2Speed = 0.0f;
GLfloat bus3Speed = 0.0f;
GLfloat cloudSpeed = 0.0f;


void bus2Run(int value) {

    if(bus2Position <-35.0)
        bus2Position = 35.0f;
    bus2Position -= bus2Speed;
	glutPostRedisplay();
	glutTimerFunc(100, bus2Run, 0);
}

void bus3Run(int value) {

    if(bus3Position <-35.0)
        bus3Position = 35.0f;
    bus3Position -= bus3Speed;
	glutPostRedisplay();
	glutTimerFunc(100, bus3Run, 0);
}


void bus1Run(int value) {

    if(bus1Position > 35.0)
        bus1Position = -35.0f;
    bus1Position += bus1Speed;
	glutPostRedisplay();
	glutTimerFunc(100,  bus1Run, 0);
}


void cloudRun(int value) {

    if(cloudPosition > 35.0)
        cloudPosition = -35.0f;
    cloudPosition += cloudSpeed;
	glutPostRedisplay();
	glutTimerFunc(100,  cloudRun, 0);
}


void day(){

 /**
	* BISHWAGIT DAS
	* Component: Sky
	***/

	glBegin(GL_QUADS);              //sky
	glColor3ub(74, 186, 247);
	glVertex2f(-35.0f, -35.0f);
    glVertex2f(35.0f, -35.0f);
	glVertex2f(35.0f, 35.0f);
    glVertex2f(-35.0f, 35.0f);
	glEnd();

    /**
	* BISHWAGIT DAS
	* Component: cloud
	***/

	//----------------------------------------------------------------------------------
	 GLfloat x=0.6f; GLfloat y=0.6f; GLfloat radius1=0.18f;
    int q;
	int triangleAmount1 = 20; //# of triangles used to draw circle
	GLfloat twicePi1 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
		glColor3ub(203, 242, 247);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

	/**
	* BISHWAGIT DAS
	* Component: cloud right tiny
	***/







    glPushMatrix();
    glTranslatef(cloudPosition,0.0f, 0.0f);




    /**
	* BISHWAGIT DAS
	* Component: cloud left small
	***/


	x=20.25f; y=5.58f; radius1=5.12f;
	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(203, 242, 247);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

	/**
	* BISHWAGIT DAS
	* Component: sky
	***/






	/**
	* BISHWAGIT DAS
	* Component: sky upper part
	***/

	glBegin(GL_QUADS);              //
	glColor3ub(74, 186, 247);
	glVertex2f(-35.0f, 7.0f);
    glVertex2f(-35.0f, 16.0f);
	glVertex2f(35.0f, 16.0f);
    glVertex2f(35.0f, 7.0f);
	glEnd();


	/**
	BISHWAGIT DAS
	* Component:  cloud right tiny
	***/



	x=30.83f; y=15.64f; radius1=6.08f;
	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(203, 242, 247);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

	/**
	 BISHWAGIT DAS
	* Component:  cloud right small
	***/

    x=25.95f; y=17.61f; radius1=6.08f;
	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(203, 242, 247);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


	/**
	* BISHWAGIT DAS
	* Component:  cloud left tiny
	***/





	/**
	* MOST. SUROVE AFREEN
	* Component: cloud left small
	***/



	x=20.25f; y=15.58f; radius1=5.12f;
	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(203, 242, 247);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


	/**
	* MOST. SUROVE AFREEN
	* Component: cloud right tiny
	***/



	x=-30.83f; y=15.64f; radius1=5.08f;
	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(203, 242, 247);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


	/**
	* BISHWAGIT DAS
	* center of circle
	***/



    x=-25.95f; y=17.61f; radius1=5.08f;
	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(203, 242, 247);
		glVertex2f(x, y);
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();



	/**
	* BISHWAGIT DAS
	* cloud left tiny
	***/


	x=-15.37f; y=14.64f; radius1=5.08f;
	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(203, 242, 247);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


	/**
	* BISHWAGIT DAS
	*  cloud left small
	***/




	x=-20.25f; y=15.58f; radius1=4.12f;
	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(203, 242, 247);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


	/**
	* BISHWAGIT DAS
	*  sky upper part 2 for cloud
	***/






    //glTranslatef(-1.5,0.2,0.0);
    //glScalef(1.0,1.0,1.0);


    x=0.6f; y=20.6f; radius1=0.18f;
    glBegin(GL_TRIANGLE_FAN);
		glColor3ub(195, 230, 235);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

	x=0.83f; y=20.64f; radius1=0.08f;
	glBegin(GL_TRIANGLE_FAN);                                                              //cloud right tiny using glScalef()
		glColor3ub(195, 230, 235);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    x=1.0f; y=10.56f; radius1=0.15f;
	glBegin(GL_TRIANGLE_FAN);                                                              //cloud right small using glScalef()
		glColor3ub(195, 230, 235);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

	glPopMatrix();

    /*****************************
    * Cloud end
    *****************************/


    glBegin(GL_QUADS);  //sky
	glColor3ub(74, 186, 247);
	glVertex2f(-35.0f, -35.0f);
    glVertex2f(35.0f, -35.0f);
	glVertex2f(35.0f, 18.0f);
    glVertex2f(-35.0f, 18.0f);
	glEnd();




    /**
	* BISHWAGIT DAS
	*  cloud using glScalef
	***/


    glBegin(GL_QUADS);              // road component last 1
	glColor3ub(50,205,50); // lime green
	glVertex2f(-35.0f, -35.0f);    // x, y
    glVertex2f(35.0f, -35.0f);
    glVertex2f(35.0f, -30.0f);
	glVertex2f(-35.0f, -30.0f);    // x, y

	glEnd();

	glBegin(GL_QUADS);              // road component last 2
	glColor3ub(124,252,0); // lawn green
	glVertex2f(-35.0f, -35.0f);    // x, y
    glVertex2f(35.0f, -35.0f);
    glVertex2f(35.0f, -33.0f);
	glVertex2f(-35.0f, -33.0f);    // x, y

	glEnd();



	glBegin(GL_QUADS);              // road component last 3
	glColor3ub(208, 211, 212); // lawn green
	glVertex2f(-35.0f, -32.0f);    // x, y
    glVertex2f(35.0f, -32.0f);
    glVertex2f(35.0f, -30.0f);
	glVertex2f(-35.0f, -30.0f);    // x, y

	glEnd();

	glBegin(GL_QUADS);              // road component last 4
	glColor3ub(66, 73, 73); // dim grey
	glVertex2f(-35.0f, -30.0f);    // x, y
    glVertex2f(35.0f, -30.0f);
    glVertex2f(35.0f, -15.0f);
	glVertex2f(-35.0f, -15.0f);    // x, y

	glEnd();


	glBegin(GL_QUADS);              // road block component 1 to 5
	glColor3ub(235, 243, 244); // dim grey
	glVertex2f(-33.0f, -23.5f);    // x, y
    glVertex2f(-23.0f, -23.5f);
    glVertex2f(-23.0f, -21.5f);
	glVertex2f(-33.0f, -21.5f);    // x, y



	glVertex2f(-18.0f, -23.5f);    // x, y
    glVertex2f(-8.0f, -23.5f);
    glVertex2f(-8.0f, -21.5f);
	glVertex2f(-18.0f, -21.5f);    // x, y




	glVertex2f(-3.0f, -23.5f);    // x, y
    glVertex2f(7.0f, -23.5f);
    glVertex2f(7.0f, -21.5f);
	glVertex2f(-3.0f, -21.5f);    // x, y




	glVertex2f(12.0f, -23.5f);    // x, y
    glVertex2f(22.0f, -23.5f);
    glVertex2f(22.0f, -21.5f);
	glVertex2f(12.0f, -21.5f);    // x, y



	glVertex2f(27.0f, -23.5f);    // x, y
    glVertex2f(35.0f, -23.5f);
    glVertex2f(35.0f, -21.5f);
	glVertex2f(27.0f, -21.5f);    // x, y




	glEnd();



	glBegin(GL_QUADS);              // road component last 5
	glColor3ub(236, 235, 241); // dim grey
	glVertex2f(-35.0f, -15.0f);    // x, y
    glVertex2f(35.0f, -15.0f);
    glVertex2f(35.0f, -9.0f);
	glVertex2f(-35.0f, -9.0f);    // x, y

	glEnd();

	glBegin(GL_QUADS);              // road component last 6
	glColor3ub(50,205,50); // dim grey
	glVertex2f(4.0f, -13.0f);    // x, y
    glVertex2f(35.0f, -13.0f);
    glVertex2f(35.0f, -9.0f);
	glVertex2f(4.0f, -9.0f);    // x, y

	glEnd();

	glBegin(GL_QUADS);              // road component last 7
	glColor3ub(124,252,0); // dim grey
	glVertex2f(5.0f, -12.0f);    // x, y
    glVertex2f(35.0f, -12.0f);
    glVertex2f(35.0f, -9.0f);
	glVertex2f(5.0f, -9.0f);    // x, y

	glEnd();

    glBegin(GL_QUADS);              // road component last 8
	glColor3ub(50,205,50); // dim grey
	glVertex2f(1.0f, -13.0f);    // x, y
    glVertex2f(-35.0f, -13.0f);
    glVertex2f(-35.0f, -9.0f);
	glVertex2f(1.0f, -9.0f);    // x, y

	glEnd();

	glBegin(GL_QUADS);              // road component last 9
	glColor3ub(124,252,0); // dim grey
	glVertex2f(0.0f, -12.0f);    // x, y
    glVertex2f(-35.0f, -12.0f);
    glVertex2f(-35.0f, -9.0f);
	glVertex2f(0.0f, -9.0f);    // x, y
	glEnd();

	/********************************
	* MD. Tanjimul Islam
	* Bus1 code start
	***************************/


    glPushMatrix();
    glTranslatef(bus1Position,0.0f, 0.0f);


	//Full Body of yellow bus1
    glBegin(GL_QUADS);
	glColor3ub(254,192,0); // yellow
	glVertex2f(5.00f, -20.0f);
    glVertex2f(16.0f, -20.0f);
    glVertex2f(16.0f, -16.0f);
	glVertex2f(5.0f, -16.0f);
	glEnd();


    // engine side of yellow bus1
	glBegin(GL_QUADS);
	glColor3ub(254,192,0); // yellow
	glVertex2f(5.00f, -18.5f);
    glVertex2f(17.50f, -18.5f);
    glVertex2f(17.5f, -20.0f);
	glVertex2f(5.0f, -20.0f);
	glEnd();

    // window 1 of bus1
	glBegin(GL_QUADS);
	glColor3ub(50,44,44);
    glVertex2f(6.00f, -18.5f);
    glVertex2f(7.5f, -18.5f);
    glVertex2f(7.5f, -17.0f);
    glVertex2f(6.00f, -17.0f);
	glEnd();



    // window 2 of bus1
    //glLoadIdentity();
	//glTranslatef(1.7f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(50,44,44);
    glVertex2f(7.70f, -18.5f);
    glVertex2f(9.2f, -18.5f);
    glVertex2f(9.2f, -17.0f);
    glVertex2f(7.70f, -17.0f);
	glEnd();


	// window 3 of bus1


    //glLoadIdentity();
	//glTranslatef(3.4f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(50,44,44);
    glVertex2f(9.40f, -18.5f);
    glVertex2f(10.9f, -18.5f);
    glVertex2f(10.9f, -17.0f);
    glVertex2f(9.40f, -17.0f);
	glEnd();



    // gate 1 of bus1
    //glLoadIdentity();
	//glTranslatef(5.1f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(50,44,44);
    glVertex2f(11.10f, -18.5f);
    glVertex2f(12.6f, -18.5f);
    glVertex2f(12.6f, -17.0f);
    glVertex2f(11.10f, -17.0f);
	glEnd();


    //glLoadIdentity();
	//glTranslatef(6.8f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(50,44,44);
    glVertex2f(12.80f, -18.5f);
    glVertex2f(14.3f, -18.5f);
    glVertex2f(14.3f, -17.0f);
    glVertex2f(12.80f, -17.0f);
	glEnd();


    //glLoadIdentity();
	//glTranslatef(6.8f, -1.3f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(50,44,44);
    glVertex2f(12.80f, -19.8f);
    glVertex2f(14.3f, -19.8f);
    glVertex2f(14.3f, -18.3f);
    glVertex2f(12.80f, -18.3f);
	glEnd();

    //glLoadIdentity();



    glBegin(GL_POLYGON);
    glColor3ub(137,137,137); // dim grey
    glVertex2f(15.00f, -18.50f);
    glVertex2f(17.00f, -18.50f);
    glVertex2f(16.00f, -17.0f);
    glVertex2f(15.00f, -17.00f);

    glEnd();


    // bus1 font glass border
    glLineWidth(1.00);
    glBegin(GL_LINES);
    glColor3ub(254,192,0);
    glVertex2f(16.00f, -17.0f);
    glVertex2f(17.00f, -18.50f);
    glEnd();


    // bus1 light
    glLineWidth(5.00);
    glBegin(GL_LINES);
    glColor3ub(189, 33, 0);
    glVertex2f(17.50f, -19.00f);
    glVertex2f(17.50f, -19.50f);
    glEnd();


    // bus1 body bit 1
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3ub(50, 44, 44);
    glVertex2f(5.2f, -19.0f);
    glVertex2f(12.00f, -19.0f);
    glEnd();


    // bus1 body bit 2
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3ub(50, 44, 44);
    glVertex2f(5.2f, -19.5f);
    glVertex2f(12.00f, -19.5f);
    glEnd();


     /****
	* MD. TANJIMUL ISLAM
	*  Bus1 tyre1
	***/
	glBegin(GL_TRIANGLE_FAN);
	x=7.0f; y=-19.8f; radius1=0.85f;
		glColor3ub(42, 55, 74);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


	glBegin(GL_TRIANGLE_FAN);
	x=7.0f; y=-19.8f; radius1=0.45f;
		glColor3ub(205, 204, 209);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();



    /****
	* MD. TANJIMUL ISLAM
	*  Bus1 tyre2
	***/
	glBegin(GL_TRIANGLE_FAN);
	x=16.0f; y=-19.8f; radius1=0.85f;
		glColor3ub(42, 55, 74);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();



	glBegin(GL_TRIANGLE_FAN);
	x=16.0f; y=-19.8f; radius1=0.45f;
		glColor3ub(205, 204, 209);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


	glPopMatrix();




    /******
    * Bus2 Code start
    ******/

    /****
	* MD. TANJIMUL ISLAM
	*  Bus2 Body
	***/


    glPushMatrix();
    glTranslatef(bus2Position,0.0f, 0.0f);


    glBegin(GL_QUADS);
	glColor3ub(67, 93, 195); // yellow
	glVertex2f(-24.0f, -28.0f);
    glVertex2f(-10.0f, -28.0f);
    glVertex2f(-10.0f, -24.0f);
	glVertex2f(-24.0f, -24.0f);
	glEnd();


	/****
	* MD. TANJIMUL ISLAM
	*  bus2 Full Body bit
	***/
	glLineWidth(0.85);
    glBegin(GL_LINES);
	glColor3ub(26, 26, 0); // yellow
	glVertex2f(-24.0f, -28.0f);
    glVertex2f(-10.0f, -28.0f);

    glVertex2f(-10.0f, -28.0f);
    glVertex2f(-10.0f, -24.0f);

    glVertex2f(-10.0f, -24.0f);
    glVertex2f(-24.0f, -24.0f);

	glVertex2f(-24.0f, -24.0f);
	glVertex2f(-24.0f, -28.0f);
	glEnd();


    /****
	* MD. TANJIMUL ISLAM
	*  bus2 head light
	***/
    glLineWidth(5.00);
    glBegin(GL_LINES);
    glColor3ub(189, 33, 0);
    glVertex2f(-23.8f, -27.00f);
    glVertex2f(-23.8f, -27.50f);
    glEnd();


    /****
	* MD. TANJIMUL ISLAM
	*  bus2 back bit font
	***/
    glBegin(GL_QUADS);
	glColor3ub(50, 44, 44); // yellow
	glVertex2f(-24.0f, -28.0f);
    glVertex2f(-23.0f, -28.0f);
    glVertex2f(-23.0f, -27.50f);
	glVertex2f(-24.0f, -27.50f);
	glEnd();


	/****
	* MD. TANJIMUL ISLAM
	*  bus2 view glass
	***/
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(-23.5f, -27.0f);
    glVertex2f(-24.0f, -27.0f);
    glVertex2f(-24.0f, -24.5f);
	glVertex2f(-23.5f, -24.5f);
	glEnd();


	/****
	* MD. TANJIMUL ISLAM
	*  bus2 back bit back
	***/
	//glLoadIdentity();
	//glTranslatef(13.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(50, 44, 44); // yellow
	glVertex2f(-11.0f, -28.0f);
    glVertex2f(-10.0f, -28.0f);
    glVertex2f(-10.0f, -27.50f);
	glVertex2f(-11.0f, -27.50f);
	glEnd();
    //glLoadIdentity();


    /****
	* MD. TANJIMUL ISLAM
	*  bus2 door1
	***/
	glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(26, 26, 0); // yellow
	glVertex2f(-23.0f, -27.5f);
	glVertex2f(-22.0f, -27.5f);

    glVertex2f(-22.0f, -27.5f);
    glVertex2f(-22.0f, -24.5f);

    glVertex2f(-22.0f, -24.5f);
    glVertex2f(-23.0f, -24.5f);

	glVertex2f(-23.0f, -24.5f);
	glVertex2f(-23.0f, -27.5f);
	glEnd();


	/****
	* MD. TANJIMUL ISLAM
	*  bus2 door inner1
	***/
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(-22.75f, -26.25f);
    glVertex2f(-22.25f, -26.25f);
    glVertex2f(-22.25f, -24.75f);
	glVertex2f(-22.75f, -24.75f);
	glEnd();


    /****
	* MD. TANJIMUL ISLAM
	*  bus2 door2
	***/

    //glLoadIdentity();
	//glTranslatef(1.2f, 0.0f, 0.0f);
	glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(26, 26, 0); // yellow
	glVertex2f(-21.8f, -27.5f);
	glVertex2f(-20.8f, -27.5f);

    glVertex2f(-20.8f, -27.5f);
    glVertex2f(-20.8f, -24.5f);

    glVertex2f(-20.8f, -24.5f);
    glVertex2f(-21.8f, -24.5f);

	glVertex2f(-21.8f, -24.5f);
	glVertex2f(-21.8f, -27.5f);
	glEnd();



	/****
	* MD. TANJIMUL ISLAM
	*  bus2 door inner2
	***/
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(-21.55f, -26.25f);
    glVertex2f(-21.05f, -26.25f);
    glVertex2f(-21.05f, -24.75f);
	glVertex2f(-21.55f, -24.75f);
	glEnd();
    //glLoadIdentity();


    /****
	* MD. TANJIMUL ISLAM
	*  bus2 window1
	***/
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(-20.0f, -26.0f);
    glVertex2f(-20.0f, -24.75f);
    glVertex2f(-18.5f, -24.75f);
	glVertex2f(-18.5f, -26.0f);
	glEnd();
    //glLoadIdentity();


    /****
	* MD. TANJIMUL ISLAM
	*  bus2 window2
	***/
    //glLoadIdentity();
	//glTranslatef(2.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(-18.0f, -26.0f);
    glVertex2f(-18.0f, -24.75f);
    glVertex2f(-16.5f, -24.75f);
	glVertex2f(-16.5f, -26.0f);
	glEnd();
    //glLoadIdentity();



    /****
	* MD. TANJIMUL ISLAM
	*  bus2 window3
	***/
    //glLoadIdentity();
	//glTranslatef(4.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(-16.0f, -26.0f);
    glVertex2f(-16.0f, -24.75f);
    glVertex2f(-14.5f, -24.75f);
	glVertex2f(-14.5f, -26.0f);
	glEnd();
    //glLoadIdentity();



    /****
	* MD. TANJIMUL ISLAM
	*  bus2 window4
	***/
    //glLoadIdentity();
	//glTranslatef(6.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(-14.0f, -26.0f);
    glVertex2f(-14.0f, -24.75f);
    glVertex2f(-12.5f, -24.75f);
	glVertex2f(-12.5f, -26.0f);
	glEnd();
    //glLoadIdentity();



    /****
	* MD. TANJIMUL ISLAM
	*  bus2 window4
	***/
    //glLoadIdentity();
	//glTranslatef(8.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(-12.0f, -26.0f);
    glVertex2f(-12.0f, -24.75f);
    glVertex2f(-10.5f, -24.75f);
	glVertex2f(-10.5f, -26.0f);
	glEnd();
    //glLoadIdentity();



    /****
	* MD. TANJIMUL ISLAM
	*  bus2 box1
	***/
    //glLoadIdentity();
	//glTranslatef(8.0f, 0.0f, 0.0f);
	glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(26, 26, 0); // yellow
	glVertex2f(-19.0f,  -27.8f);
	glVertex2f(-17.0f, -27.8f);

    glVertex2f(-17.0f, -27.8f);
    glVertex2f(-17.0f, -26.5f);

    glVertex2f(-17.0f, -26.5f);
    glVertex2f(-19.0f,  -26.5f);

	glVertex2f(-19.0f,  -26.5f);
	glVertex2f(-19.0f,  -27.8f);
	glEnd();
    //glLoadIdentity();


    /****
	* MD. TANJIMUL ISLAM
	*  bus2 box
	***/
    //glLoadIdentity();
	//glTranslatef(3.5f, 0.0f, 0.0f);
	glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(26, 26, 0); // yellow
	glVertex2f(-15.5f,  -27.8f);
	glVertex2f(-13.5f, -27.8f);

    glVertex2f(-13.5f, -27.8f);
    glVertex2f(-13.5f, -26.5f);

    glVertex2f(-13.5f, -26.5f);
    glVertex2f(-15.5f,  -26.5f);

	glVertex2f(-15.5f,  -26.5f);
	glVertex2f(-15.5f,  -27.8f);
	glEnd();
    //glLoadIdentity();



     /****
	* MD. TANJIMUL ISLAM
	*  Bus2 tyre1
	***/
	glBegin(GL_TRIANGLE_FAN);
	x=-22.7f; y=-27.9f; radius1=0.85f;
		glColor3ub(42, 55, 74);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


	glBegin(GL_TRIANGLE_FAN);
	x=-22.7f; y=-27.9f; radius1=0.45f;
		glColor3ub(205, 204, 209);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();



    /****
	* MD. TANJIMUL ISLAM
	*  Bus2 tyre2
	***/
	glBegin(GL_TRIANGLE_FAN);
	x=-12.0f; y=-27.9f; radius1=0.85f;
		glColor3ub(42, 55, 74);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	x=-12.0f; y=-27.9f; radius1=0.45f;
		glColor3ub(205, 204, 209);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glPopMatrix();


	/*****.
	* Bus 2 End
	****/





    /******
    * bus3 Code start
    ******/

    glPushMatrix();
    glTranslatef(bus3Position,0.0f, 0.0f);

    /****
	* MD. TANJIMUL ISLAM
	*  bus3 Body
	***/
    glBegin(GL_QUADS);
	glColor3ub(158, 53, 198); // yellow
	glVertex2f(24.0f, -28.0f);
    glVertex2f(10.0f, -28.0f);
    glVertex2f(10.0f, -24.0f);
	glVertex2f(24.0f, -24.0f);
	glEnd();


	/****
	* MD. TANJIMUL ISLAM
	*  bus3 Full Body bit
	***/
	glLineWidth(0.85);
    glBegin(GL_LINES);
	glColor3ub(26, 26, 0); // yellow
	glVertex2f(24.0f, -28.0f);
    glVertex2f(10.0f, -28.0f);

    glVertex2f(10.0f, -28.0f);
    glVertex2f(10.0f, -24.0f);

    glVertex2f(10.0f, -24.0f);
    glVertex2f(24.0f, -24.0f);

	glVertex2f(24.0f, -24.0f);
	glVertex2f(24.0f, -28.0f);
	glEnd();


    /****
	* MD. TANJIMUL ISLAM
	*  bus3 head light
	***/
    glLineWidth(5.00);
    glBegin(GL_LINES);
    glColor3ub(189, 33, 0);
    glVertex2f(10.2f, -27.00f);
    glVertex2f(10.2f, -27.50f);
    glEnd();


    /****
	* MD. TANJIMUL ISLAM
	*  bus3 back bit font
	***/
    glBegin(GL_QUADS);
	glColor3ub(50, 44, 44); // yellow
	glVertex2f(10.0f, -28.0f);
    glVertex2f(11.0f, -28.0f);
    glVertex2f(11.0f, -27.50f);
	glVertex2f(10.0f, -27.50f);
	glEnd();


	/****
	* MD. TANJIMUL ISLAM
	*  bus3 view glass
	***/
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(10.5f, -27.0f);
    glVertex2f(10.0f, -27.0f);
    glVertex2f(10.0f, -24.5f);
	glVertex2f(10.5f, -24.5f);
	glEnd();





    /****
	* MD. TANJIMUL ISLAM
	*  bus3 door1
	***/
	glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(26, 26, 0); // yellow
	glVertex2f(11.0f, -27.5f);
	glVertex2f(12.0f, -27.5f);

    glVertex2f(12.0f, -27.5f);
    glVertex2f(12.0f, -24.5f);

    glVertex2f(12.0f, -24.5f);
    glVertex2f(11.0f, -24.5f);

	glVertex2f(11.0f, -24.5f);
	glVertex2f(11.0f, -27.5f);
	glEnd();


	/****
	* MD. TANJIMUL ISLAM
	*  bus3 door inner1
	***/
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(11.75f, -26.25f);
    glVertex2f(11.25f, -26.25f);
    glVertex2f(11.25f, -24.75f);
	glVertex2f(11.75f, -24.75f);
	glEnd();


    /****
	* MD. TANJIMUL ISLAM
	*  bus3 door2
	***/

    //glLoadIdentity();
	//glTranslatef(1.2f, 0.0f, 0.0f);
	glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(26, 26, 0); // yellow
	glVertex2f(12.2f, -27.5f);
	glVertex2f(13.2f, -27.5f);

    glVertex2f(13.2f, -27.5f);
    glVertex2f(13.2f, -24.5f);

    glVertex2f(13.2f, -24.5f);
    glVertex2f(12.2f, -24.5f);

	glVertex2f(12.2f, -24.5f);
	glVertex2f(12.2f, -27.5f);
	glEnd();



	/****
	* MD. TANJIMUL ISLAM
	*  bus3 door inner2
	***/
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(12.95f, -26.25f);
    glVertex2f(12.45f, -26.25f);
    glVertex2f(12.45f, -24.75f);
	glVertex2f(12.95f, -24.75f);
	glEnd();
    //glLoadIdentity();


    /****
	* MD. TANJIMUL ISLAM
	*  bus3 window1
	***/
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(14.0f, -26.0f);
    glVertex2f(14.0f, -24.75f);
    glVertex2f(15.5f, -24.75f);
	glVertex2f(15.5f, -26.0f);
	glEnd();
   // glLoadIdentity();


    /****
	* MD. TANJIMUL ISLAM
	*  bus3 window2
	***/
    //glLoadIdentity();
	//glTranslatef(2.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(16.0f, -26.0f);
    glVertex2f(16.0f, -24.75f);
    glVertex2f(17.5f, -24.75f);
	glVertex2f(17.5f, -26.0f);
	glEnd();
    //glLoadIdentity();



    /****
	* MD. TANJIMUL ISLAM
	*  bus3 window3
	***/
    //glLoadIdentity();
	//glTranslatef(4.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(18.0f, -26.0f);
    glVertex2f(18.0f, -24.75f);
    glVertex2f(19.5f, -24.75f);
	glVertex2f(19.5f, -26.0f);
	glEnd();
    //glLoadIdentity();



    /****
	* MD. TANJIMUL ISLAM
	*  bus3 window4
	***/
    //glLoadIdentity();
	//glTranslatef(6.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(20.0f, -26.0f);
    glVertex2f(20.0f, -24.75f);
    glVertex2f(21.5f, -24.75f);
	glVertex2f(21.5f, -26.0f);
	glEnd();
    //glLoadIdentity();



    /****
	* MD. TANJIMUL ISLAM
	*  bus3 window5
	***/
    //glLoadIdentity();
	//glTranslatef(8.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(22.0f, -26.0f);
    glVertex2f(22.0f, -24.75f);
    glVertex2f(23.5f, -24.75f);
	glVertex2f(23.5f, -26.0f);
	glEnd();
    //glLoadIdentity();



    /****
	* MD. TANJIMUL ISLAM
	*  bus3 box1
	***/
    //glLoadIdentity();
	//glTranslatef(8.0f, 0.0f, 0.0f);
	glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(26, 26, 0); // yellow
	glVertex2f(16.0f,  -27.8f);
	glVertex2f(14.0f, -27.8f);

    glVertex2f(14.0f, -27.8f);
    glVertex2f(14.0f, -26.5f);

    glVertex2f(14.0f, -26.5f);
    glVertex2f(16.0f,  -26.5f);

	glVertex2f(16.0f,  -26.5f);
	glVertex2f(16.0f,  -27.8f);
	glEnd();
    //glLoadIdentity();


    /****
	* MD. TANJIMUL ISLAM
	*  bus3 box
	***/
   // glLoadIdentity();
	//glTranslatef(3.5f, 0.0f, 0.0f);
	glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(26, 26, 0); // yellow
	glVertex2f(19.5f,  -27.8f);
	glVertex2f(17.5f, -27.8f);

    glVertex2f(17.5f, -27.8f);
    glVertex2f(17.5f, -26.5f);

    glVertex2f(17.5f, -26.5f);
    glVertex2f(19.5f,  -26.5f);

	glVertex2f(19.5f,  -26.5f);
	glVertex2f(19.5f,  -27.8f);
	glEnd();
   // glLoadIdentity();



     /****
	* MD. TANJIMUL ISLAM
	*  bus3 tyre1
	***/
	glBegin(GL_TRIANGLE_FAN);
	x=22.7f; y=-27.9f; radius1=0.85f;
		glColor3ub(42, 55, 74);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


	glBegin(GL_TRIANGLE_FAN);
	x=22.7f; y=-27.9f; radius1=0.45f;
		glColor3ub(205, 204, 209);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();



    /****
	* MD. TANJIMUL ISLAM
	*  bus3 tyre2
	***/
	glBegin(GL_TRIANGLE_FAN);
	x=12.0f; y=-27.9f; radius1=0.85f;
		glColor3ub(42, 55, 74);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	x=12.0f; y=-27.9f; radius1=0.45f;
		glColor3ub(205, 204, 209);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


    glPopMatrix();

	/*****
	* Bus 3 End
	****/



/****
    *BISHWAGIT DAS
    *  DRAW HOUSE
    ***/


/* House*/

    glBegin(GL_QUADS);
	glColor3ub(210,105,30); // yellow
	glVertex2f(0.0f, 0.0f);
    glVertex2f(20.0f, 0.0f);
    glVertex2f(20.0f, -9.0f);
	glVertex2f(0.0f, -9.0f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(91, 63, 71 ); // yellow
	glVertex2f(0.0f, -9.0f);
    glVertex2f(-3.0f, -9.0f);
    glVertex2f(-3.0f, -0.0f);
	glVertex2f(0.0f, -0.0f);
	glEnd();





   //door//
	glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(1.0f, -4.0f);
    glVertex2f(1.0f, -9.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glVertex2f(1.0f, -4.0f);
    glVertex2f(4.0f, -4.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(4.0f, -4.0f);
    glVertex2f(4.0f, -9.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(1.0f, -3.0f);
    glVertex2f(4.0f, -3.0f);
    glEnd();


    glLineWidth(2.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(2.0f, -6.0f);
    glVertex2f(2.0f, -6.5f);
    glEnd();



    //window1//


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(7.0f, -3.0f);
    glVertex2f(7.0f, -7.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(7.0f, -7.0f);
    glVertex2f(11.0f, -7.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(11.0f, -3.0f);
    glVertex2f(11.0f, -7.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(7.0f, -3.0f);
    glVertex2f(11.0f, -3.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(8.5f, -3.0f);
    glVertex2f(8.5f, -7.0f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(52, 152, 219); // yellow
	glVertex2f(7.1f, -3.1f);
    glVertex2f(8.4f, -3.1f);
    glVertex2f(8.4f, -6.9f);
	glVertex2f(7.1f, -6.9f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(52, 152, 219); // yellow
	glVertex2f(8.6f, -3.1f);
    glVertex2f(10.9f, -3.1f);
    glVertex2f(10.9f, -6.9f);
	glVertex2f(8.6f, -6.9f);
	glEnd();


	//window2//
	glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(13.0f, -3.0f);
    glVertex2f(13.0f, -7.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(13.0f, -7.0f);
    glVertex2f(17.0f, -7.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(17.0f, -3.0f);
    glVertex2f(17.0f, -7.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(13.0f, -3.0f);
    glVertex2f(17.0f, -3.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(14.5f, -3.0f);
    glVertex2f(14.5f, -7.0f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(52, 152, 219); // yellow
	glVertex2f(13.1f, -3.1f);
    glVertex2f(14.4f, -3.1f);
    glVertex2f(14.4f, -6.9f);
	glVertex2f(13.1f, -6.9f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(52, 152, 219); // yellow
	glVertex2f(14.6f, -3.1f);
    glVertex2f(16.9f, -3.1f);
    glVertex2f(16.9f, -6.9f);
	glVertex2f(14.6f, -6.9f);
	glEnd();







	///////line right///

	glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -0.5f);
    glVertex2f(21.5f, -0.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -1.0f);
    glVertex2f(21.5f, -1.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -1.5f);
    glVertex2f(21.5f, -1.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -2.0f);
    glVertex2f(21.5f, -2.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -2.5f);
    glVertex2f(21.5f, -2.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -3.0f);
    glVertex2f(21.5f, -3.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -3.5f);
    glVertex2f(21.5f, -3.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -4.0f);
    glVertex2f(21.5f, -4.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -4.5f);
    glVertex2f(21.5f, -4.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -5.0f);
    glVertex2f(21.5f, -5.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -5.5f);
    glVertex2f(21.5f, -5.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -6.0f);
    glVertex2f(21.5f, -6.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -6.5f);
    glVertex2f(21.5f, -6.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -7.0f);
    glVertex2f(21.5f, -7.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -7.5f);
    glVertex2f(21.5f, -7.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -8.0f);
    glVertex2f(21.5f, -8.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -8.5f);
    glVertex2f(21.5f, -8.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(65, 2, 19);
    glVertex2f(20.8f, 0.0f);
    glVertex2f(20.8f, -9.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(65, 2, 19);
    glVertex2f(19.0f, 0.0f);
    glVertex2f(19.0f, -9.0f);
    glEnd();


    //line 2 left//


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -0.5f);
    glVertex2f(-3.0f, -0.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -1.0f);
    glVertex2f(-3.0f, -1.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -1.5f);
    glVertex2f(-3.0f, -1.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -2.0f);
    glVertex2f(-3.0f, -2.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -2.5f);
    glVertex2f(-3.0f, -2.5f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -3.0f);
    glVertex2f(-3.0f, -3.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -3.5f);
    glVertex2f(-3.0f, -3.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -4.0f);
    glVertex2f(-3.0f, -4.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -4.5f);
    glVertex2f(-3.0f, -4.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -5.0f);
    glVertex2f(-3.0f, -5.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -5.5f);
    glVertex2f(-3.0f, -5.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -6.0f);
    glVertex2f(-3.0f, -6.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -6.5f);
    glVertex2f(-3.0f, -6.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -7.0f);
    glVertex2f(-3.0f, -7.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -7.5f);
    glVertex2f(-3.0f, -7.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -8.0f);
    glVertex2f(-3.0f, -8.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -8.5f);
    glVertex2f(-3.0f, -8.5f);
    glEnd();


    //////////////

    glBegin(GL_QUADS);
	glColor3ub(251, 252, 252);
    glVertex2f(-4.0f, 7.0f);
    glVertex2f(22.0f, 7.0f);
    glVertex2f(22.0f, -0.1f);
    glVertex2f(-4.0f, -0.1f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(52, 152, 219);
    glVertex2f(-3.0f, 6.0f);
    glVertex2f(21.0f, 6.0f);
    glVertex2f(21.0f, 1.0f);
    glVertex2f(-3.0f, 1.0f);
	glEnd();

      //window 3//
	glBegin(GL_QUADS);
	glColor3ub(91, 63, 71 );
    glVertex2f(-3.0f, 6.0f);
    glVertex2f(0.0f, 6.0f);
    glVertex2f(0.0f, 1.0f);
    glVertex2f(-3.0f, 1.0f);
	glEnd();




	glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(0.0f, 6.0f);
    glVertex2f(0.0f, 1.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(-3.0f, 6.0f);
    glVertex2f(-3.0f, 1.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(4.0f, 6.0f);
    glVertex2f(4.0f, 1.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(-3.0f, 1.0f);
    glVertex2f(4.0f, 1.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(-3.0f, 6.0f);
    glVertex2f(4.0f, 6.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(0.0f, 3.5f);
    glVertex2f(4.0f, 3.5f);
    glEnd();

    /////line 3///

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(-3.0f, 1.5f);
    glVertex2f(0.0f, 1.5f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(-3.0f, 2.0f);
    glVertex2f(0.0f, 2.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(-3.0f, 2.5f);
    glVertex2f(0.0f, 2.5f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(-3.0f, 3.0f);
    glVertex2f(0.0f,3.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(-3.0f, 3.5f);
    glVertex2f(0.0f, 3.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(-3.0f, 4.0f);
    glVertex2f(0.0f, 4.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(-3.0f, 4.5f);
    glVertex2f(0.0f, 4.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(-3.0f, 5.0f);
    glVertex2f(0.0f, 5.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(-3.0f, 5.5f);
    glVertex2f(0.0f, 5.5f);
    glEnd();




    //////////

    glBegin(GL_QUADS);
	glColor3ub(247, 249, 249 );
    glVertex2f(4.1f, 1.0f);
    glVertex2f(5.5f, 1.0f);
    glVertex2f(5.5f, 6.0f);
    glVertex2f(4.1f, 6.0f);
	glEnd();

	//window 4//

	glBegin(GL_QUADS);
	glColor3ub(91, 63, 71);
    glVertex2f(5.5f, 1.0f);
    glVertex2f(8.5f, 1.0f);
    glVertex2f(8.5f, 6.0f);
    glVertex2f(5.5f, 6.0f);
	glEnd();

	glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(5.5f, 1.0f);
    glVertex2f(12.5f, 1.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(5.5f, 6.0f);
    glVertex2f(12.5f, 6.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(5.5f, 1.0f);
    glVertex2f(5.5f, 6.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(8.5f, 1.0f);
    glVertex2f(8.5f, 6.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(12.5f, 1.0f);
    glVertex2f(12.5f, 6.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(8.5f, 3.5f);
    glVertex2f(12.5f, 3.5f);
    glEnd();


    //line 4///

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(5.5f, 1.5f);
    glVertex2f(8.5f, 1.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(5.5f, 2.0f);
    glVertex2f(8.5f, 2.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(5.5f, 2.5f);
    glVertex2f(8.5f, 2.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(5.5f, 3.0f);
    glVertex2f(8.5f, 3.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(5.5f, 3.5f);
    glVertex2f(8.5f, 3.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(5.5f, 4.0f);
    glVertex2f(8.5f, 4.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(5.5f, 4.5f);
    glVertex2f(8.5f, 4.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(5.5f, 5.0f);
    glVertex2f(8.5f, 5.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(5.5f, 5.5f);
    glVertex2f(8.5f, 5.5f);
    glEnd();


    /////////

    glBegin(GL_QUADS);
	glColor3ub(247, 249, 249 );
    glVertex2f(12.6f, 1.0f);
    glVertex2f(14.0f, 1.0f);
    glVertex2f(14.0f, 6.0f);
    glVertex2f(12.6f, 6.0f);
	glEnd();

	//window 5///


	glBegin(GL_QUADS);
	glColor3ub(91, 63, 71);
    glVertex2f(14.0f, 1.0f);
    glVertex2f(17.0f, 1.0f);
    glVertex2f(17.0f, 6.0f);
    glVertex2f(14.0f, 6.0f);
	glEnd();


	glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(14.0f, 1.0f);
    glVertex2f(21.0f, 1.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(14.0f, 6.0f);
    glVertex2f(21.0f, 6.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(14.0f, 1.0f);
    glVertex2f(14.0f, 6.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(17.0f, 1.0f);
    glVertex2f(17.0f, 6.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(21.0f, 1.0f);
    glVertex2f(21.0f, 6.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(17.0f, 3.5f);
    glVertex2f(21.0f, 3.5f);
    glEnd();


    //line 5//

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(14.0f, 1.5f);
    glVertex2f(17.0f, 1.5f);
    glEnd();

     glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(14.0f, 2.0f);
    glVertex2f(17.0f, 2.0f);
    glEnd();

     glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(14.0f, 2.5f);
    glVertex2f(17.0f, 2.5f);
    glEnd();

     glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(14.0f, 3.0f);
    glVertex2f(17.0f, 3.0f);
    glEnd();

     glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(14.0f, 3.5f);
    glVertex2f(17.0f, 3.5f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(14.0f, 4.0f);
    glVertex2f(17.0f, 4.0f);
    glEnd();


     glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(14.0f, 4.5f);
    glVertex2f(17.0f, 4.5f);
    glEnd();

     glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(14.0f, 5.0f);
    glVertex2f(17.0f, 5.0f);
    glEnd();

     glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(14.0f, 5.5f);
    glVertex2f(17.0f, 5.5f);
    glEnd();




    //house 2//

    glBegin(GL_QUADS);
	glColor3ub(244, 246, 247);
    glVertex2f(-6.0f, 1.0f);
    glVertex2f(-7.0f, 1.0f);
    glVertex2f(-7.0f, -9.0f);
    glVertex2f(-6.0f, -9.0f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(52, 152, 219);
    glVertex2f(-7.0f, 1.0f);
    glVertex2f(-18.0f, 1.0f);
    glVertex2f(-18.0f, -9.0f);
    glVertex2f(-7.0f, -9.0f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(244, 246, 247);
    glVertex2f(-18.0f, 1.0f);
    glVertex2f(-21.0f, 1.0f);
    glVertex2f(-21.0f, -9.0f);
    glVertex2f(-18.0f, -9.0f);
	glEnd();






    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0 );
    glVertex2f(-7.0f, 1.0f);
    glVertex2f(-7.0f, -9.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0 );
    glVertex2f(-7.0f, -9.0f);
    glVertex2f(-18.0f, -9.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0 );
    glVertex2f(-9.0f, 1.0f);
    glVertex2f(-9.0f, -9.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0 );
    glVertex2f(-18.0f, 1.0f);
    glVertex2f(-18.0f, -9.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0 );
    glVertex2f(-7.0f, 1.0f);
    glVertex2f(-18.0f, 1.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0 );
    glVertex2f(-7.0f, -1.5f);
    glVertex2f(-18.0f, -1.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0 );
    glVertex2f(-13.0f, 1.0f);
    glVertex2f(-13.0f, -9.0f);
    glEnd();

    //line 6//

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, 0.5f);
    glVertex2f(-18.0f, 0.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, 0.0f);
    glVertex2f(-18.0f, 0.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -0.5f);
    glVertex2f(-18.0f, -0.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -1.0f);
    glVertex2f(-18.0f, -1.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -1.5f);
    glVertex2f(-18.0f, -1.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -2.0f);
    glVertex2f(-18.0f, -2.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -2.5f);
    glVertex2f(-18.0f, -2.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -3.0f);
    glVertex2f(-18.0f, -3.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -3.5f);
    glVertex2f(-18.0f, -3.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -4.0f);
    glVertex2f(-18.0f, -4.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -4.5f);
    glVertex2f(-18.0f, -4.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -5.0f);
    glVertex2f(-18.0f, -5.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -5.5f);
    glVertex2f(-18.0f, -5.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -6.0f);
    glVertex2f(-18.0f, -6.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -6.5f);
    glVertex2f(-18.0f, -6.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -7.0f);
    glVertex2f(-18.0f, -7.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -7.5f);
    glVertex2f(-18.0f, -7.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -8.0f);
    glVertex2f(-18.0f, -8.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -8.5f);
    glVertex2f(-18.0f, -8.5f);
    glEnd();

    ////////

    glBegin(GL_QUADS);
	glColor3ub(44, 62, 80);
    glVertex2f(-4.0f, 1.0f);
    glVertex2f(-22.5f, 1.0f);
    glVertex2f(-22.5f, 2.5f);
    glVertex2f(-4.0f, 2.5f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(44, 62, 80);
    glVertex2f(-18.0f, 2.5f);
    glVertex2f(-22.5f, 2.5f);
    glVertex2f(-22.5f, 10.0f);
    glVertex2f(-18.0f, 10.0f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(44, 62, 80);
    glVertex2f(0.0f, 8.5f);
    glVertex2f(-18.0f, 8.5f);
    glVertex2f(-18.0f, 10.0f);
    glVertex2f(0.0f, 10.0f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(52, 152, 219);
    glVertex2f(-6.5f, 2.5f);
    glVertex2f(-18.0f, 2.5f);
    glVertex2f(-18.0f, 8.5f);
    glVertex2f(-6.5f, 8.5f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(44, 62, 80);
    glVertex2f(-10.5f, 2.5f);
    glVertex2f(-10.0f, 2.5f);
    glVertex2f(-10.0f, 8.5f);
    glVertex2f(-10.5f, 8.5f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(44, 62, 80);
    glVertex2f(-14.5f, 2.5f);
    glVertex2f(-14.0f, 2.5f);
    glVertex2f(-14.0f, 8.5f);
    glVertex2f(-14.5f, 8.5f);
	glEnd();


	glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42);
    glVertex2f(-8.5f, 8.5f);
    glVertex2f(-8.5f, 2.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42);
    glVertex2f(-6.5f, 8.5f);
    glVertex2f(-6.5f, 2.5f);
    glEnd();


    //////line 7///

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(244, 246, 247);
    glVertex2f(-9.5f, 8.5f);
    glVertex2f(-5.5f, 8.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(244, 246, 247);
    glVertex2f(-9.5f, 8.0f);
    glVertex2f(-5.5f, 8.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(244, 246, 247);
    glVertex2f(-9.5f, 7.5f);
    glVertex2f(-5.5f, 7.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(244, 246, 247);
    glVertex2f(-9.5f, 7.0f);
    glVertex2f(-5.5f, 7.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(244, 246, 247);
    glVertex2f(-9.5f, 6.5f);
    glVertex2f(-5.5f, 6.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(244, 246, 247);
    glVertex2f(-9.5f, 6.0f);
    glVertex2f(-5.5f, 6.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(244, 246, 247);
    glVertex2f(-9.5f, 5.5f);
    glVertex2f(-5.5f, 5.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(244, 246, 247);
    glVertex2f(-9.5f, 5.0f);
    glVertex2f(-5.5f, 5.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(244, 246, 247);
    glVertex2f(-9.5f, 4.5f);
    glVertex2f(-5.5f, 4.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(244, 246, 247);
    glVertex2f(-9.5f, 4.0f);
    glVertex2f(-5.5f, 4.0f);
    glEnd();
    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(244, 246, 247);
    glVertex2f(-9.5f, 3.5f);
    glVertex2f(-5.5f, 3.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(244, 246, 247);
    glVertex2f(-9.5f, 3.0f);
    glVertex2f(-5.5f, 3.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(244, 246, 247);
    glVertex2f(-9.5f, 2.5f);
    glVertex2f(-5.5f, 2.5f);
    glEnd();



    /*****************************
	** Tree1 START
	* Afsana Ferdusi Asha
	*********************************/

    glBegin(GL_TRIANGLES);
    glColor3ub(25, 111, 61);
    glVertex2f(28.5f, -2.0f);
    glVertex2f(23.0f, -6.0f);
    glVertex2f(34.0f, -6.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(34, 153, 84);
    glVertex2f(28.5f, 0.0f);
    glVertex2f(23.0f, -4.5f);
    glVertex2f(34.0f, -4.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(25, 111, 61);
    glVertex2f(28.5f, 1.0f);
    glVertex2f(23.0f, -3.0f);
    glVertex2f(34.0f, -3.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(34, 153, 84);
    glVertex2f(28.5f, 4.0f);
    glVertex2f(23.0f, -1.5f);
    glVertex2f(34.0f, -1.5f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(25, 111, 61);
    glVertex2f(28.5f, 2.0f);
    glVertex2f(23.5f, -0.2f);
    glVertex2f(33.5f, -0.2f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(120, 64, 73);
	glVertex2f(27.5f, -6.0f);
    glVertex2f(29.5f, -6.0f);
	glVertex2f(29.5f, -9.0f);
    glVertex2f(27.5f, -9.0f);
	glEnd();

	/*****************************
	** Tree1 End
	*********************************/



    /****
	* MD. TANJIMUL ISLAM
	*  road top railing1 left
	***/
    glLineWidth(5.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(-34.0f, -11.0f);
    glVertex2f(-34.0f, -7.7f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-33.98f; y=-7.8f; radius1=0.27f;
		glColor3ub(253, 252, 254);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


    /****
    * MD. TANJIMUL ISLAM
    *  road top railing left tie1
    ***/
    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(-34.0f, -8.4f);
    glVertex2f(-9.0f, -8.4f);
    glEnd();

    /****
    * MD. TANJIMUL ISLAM
    *  road top railing left tie2
    ***/
    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(-34.0f, -10.0f);
    glVertex2f(-9.0f, -10.0f);
    glEnd();



    /****
	* MD. TANJIMUL ISLAM
	*  road top railing1 right
	***/
    glLineWidth(5.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(8.0f, -11.0f);
    glVertex2f(8.0f, -7.7f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=7.98f; y=-7.8f; radius1=0.27f;
		glColor3ub(253, 252, 254);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


    /****
    * MD. TANJIMUL ISLAM
    *  road top railing loop left
    ***/
    for(float railingCounter2=0;railingCounter2<=26;railingCounter2++)
    {
        glLoadIdentity();
        glTranslatef(railingCounter2, 0.0f, 0.0f);

        glLineWidth(5.50);
        glBegin(GL_LINES);
        glColor3ub(253, 252, 254);
        glVertex2f(8.0f, -11.0f);
        glVertex2f(8.0f, -7.7f);
        glEnd();

        glBegin(GL_TRIANGLE_FAN);
        x=7.98f; y=-7.8f; radius1=0.27f;
            glColor3ub(253, 252, 254);
            glVertex2f(x, y); // center of circle
            for(q = 0; q <= triangleAmount1;q++) {
                glVertex2f(
                        x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
                    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
                );
            }
        glEnd();
    }
    glLoadIdentity();


        /****
    * MD. TANJIMUL ISLAM
    *  road top railing right tie1
    ***/
    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(34.0f, -8.4f);
    glVertex2f(8.0f, -8.4f);
    glEnd();


    /****
    * MD. TANJIMUL ISLAM
    *  road top railing right tie2
    ***/
    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(34.0f, -10.0f);
    glVertex2f(8.0f, -10.0f);
    glEnd();

   /**Most SUROVE AFREEN TREE**/



    glBegin(GL_POLYGON);
	glColor3ub(120, 64, 73);

	glVertex2f(-26.5f, -5.0f);
    glVertex2f(-28.5f, -5.0f);

    glVertex2f(-28.0f, -6.0f);
    glVertex2f(-28.0f, -7.0f);
    glVertex2f(-28.0f, -8.0f);

	glVertex2f(-28.5f, -9.0f);
    glVertex2f(-26.5f, -9.0f);

	glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(100, 64, 73);

    glVertex2f(-27.5f, -9.0f);
	glVertex2f(-26.0f, -9.0f);

    glVertex2f(-27.0f, -7.0f);

	glVertex2f(-26.0f, -5.0f);
    glVertex2f(-27.5f, -5.0f);

	glEnd();


	glBegin(GL_TRIANGLE_FAN);
	x=-29.5f; y=-4.0f; radius1=01.85f;
    glColor3ub(34, 153, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-32.5f; y=-4.0f; radius1=01.75f;
    glColor3ub(34, 153, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-31.5f; y=-1.5f; radius1=01.75f;
    glColor3ub(34, 153, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-30.0f; y=-0.0f; radius1=01.75f;
    glColor3ub(34, 153, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-27.0f; y=0.5f; radius1=01.75f;
    glColor3ub(34, 153, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-25.0f; y=-0.5f; radius1=01.75f;
    glColor3ub(34, 153, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();





    glBegin(GL_TRIANGLE_FAN);
	x=-27.5f; y=-2.7f; radius1=02.75f;
    glColor3ub(34, 153, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();




    glBegin(GL_TRIANGLE_FAN);
	x=-25.1f; y=-3.9f; radius1=01.95f;
    glColor3ub(34, 153, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-23.7f; y=-2.0f; radius1=01.75f;
    glColor3ub(34, 153, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-22.9f; y=-3.7f; radius1=01.65f;
    glColor3ub(34, 153, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();



    glBegin(GL_TRIANGLE_FAN);
	x=-28.0f; y=-1.7f; radius1=01.25f;
    glColor3ub(25, 111, 61);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-26.5f; y=-1.0f; radius1=01.25f;
    glColor3ub(25, 111, 61);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-25.0f; y=-1.0f; radius1=01.25f;
    glColor3ub(25, 111, 61);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-24.0f; y=-2.5f; radius1=01.25f;
    glColor3ub(25, 111, 61);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-23.5f; y=-3.0f; radius1=01.25f;
    glColor3ub(25, 111, 61);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-25.0f; y=-3.0f; radius1=01.25f;
    glColor3ub(25, 111, 61);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();



    glBegin(GL_TRIANGLE_FAN);
	x=-30.5f; y=-3.5f; radius1=01.25f;
    glColor3ub(34, 133, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-28.5f; y=-3.5f; radius1=01.25f;
    glColor3ub(34, 133, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-26.5f; y=-3.5f; radius1=01.25f;
    glColor3ub(34, 133, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-29.5f; y=-2.5f; radius1=01.25f;
    glColor3ub(34, 133, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-27.6f; y=-2.7f; radius1=01.25f;
    glColor3ub(34, 133, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();











    /****
	* MD. TANJIMUL ISLAM
	*  road top railing loop left
	***/
    for(float railingCounter1=0;railingCounter1<=25;railingCounter1++)
    {
        glLoadIdentity();
        glTranslatef(railingCounter1, 0.0f, 0.0f);

        glLineWidth(5.50);
        glBegin(GL_LINES);
        glColor3ub(253, 252, 254);
        glVertex2f(-34.0f, -11.0f);
        glVertex2f(-34.0f, -7.7f);
        glEnd();

        glBegin(GL_TRIANGLE_FAN);
        x=-33.98f; y=-7.8f; radius1=0.27f;
            glColor3ub(253, 252, 254);
            glVertex2f(x, y); // center of circle
            for(q = 0; q <= triangleAmount1;q++) {
                glVertex2f(
                        x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
                    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
                );
            }
        glEnd();

    }
    glLoadIdentity();


     /**********************
    * BISHWAGIT DAS
    *  LAMPPOST
    ***********************/


    ///LAMPPOST1//

    glLoadIdentity();
	glTranslatef(-12.0f, -0.5f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(52, 73, 94);
	glVertex2f(30.0f, -14.8f);
    glVertex2f(33.0f, -14.8f);
	glVertex2f(33.0f, -13.1f);
    glVertex2f(30.0f, -13.1f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(240, 243, 244);
	glVertex2f(30.5f, -14.0f);
    glVertex2f(32.5f, -14.0f);
	glVertex2f(32.5f, -12.9f);
    glVertex2f(30.5f, -12.9f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(52, 73, 94);
	glVertex2f(31.0f, -13.0f);
    glVertex2f(32.0f, -13.0f);
	glVertex2f(32.0f, -4.0f);
    glVertex2f(31.0f, -4.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(52, 73, 94);
	glVertex2f(27.0f, -4.0f);
    glVertex2f(32.0f, -4.0f);
	glVertex2f(32.0f, -5.0f);
    glVertex2f(27.0f, -5.0f);
	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3ub(52, 73, 94);
	glVertex2f(27.5f, -4.8f);
    glVertex2f(25.0f, -8.0f);
	glVertex2f(30.0f, -8.0f);
	glEnd();


    glLoadIdentity();




    ///LAMPPOST2//

    //glLoadIdentity();
	glTranslatef(-48.0f, -0.5f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(52, 73, 94);
	glVertex2f(30.0f, -14.8f);
    glVertex2f(33.0f, -14.8f);
	glVertex2f(33.0f, -13.1f);
    glVertex2f(30.0f, -13.1f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(240, 243, 244);
	glVertex2f(30.5f, -14.0f);
    glVertex2f(32.5f, -14.0f);
	glVertex2f(32.5f, -12.9f);
    glVertex2f(30.5f, -12.9f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(52, 73, 94);
	glVertex2f(31.0f, -13.0f);
    glVertex2f(32.0f, -13.0f);
	glVertex2f(32.0f, -4.0f);
    glVertex2f(31.0f, -4.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(52, 73, 94);
	glVertex2f(27.0f, -4.0f);
    glVertex2f(32.0f, -4.0f);
	glVertex2f(32.0f, -5.0f);
    glVertex2f(27.0f, -5.0f);
	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3ub(52, 73, 94);
	glVertex2f(27.5f, -4.8f);
    glVertex2f(25.0f, -8.0f);
	glVertex2f(30.0f, -8.0f);



	glEnd();

    glLoadIdentity();

}




void night(){


    /**
	* BISHWAGIT DAS
	* Component: Sky
	***/

	glBegin(GL_QUADS);              //sky
	glColor3ub(64,64,64);
	glVertex2f(-35.0f, -35.0f);
    glVertex2f(35.0f, -35.0f);
	glVertex2f(35.0f, 35.0f);
    glVertex2f(-35.0f, 35.0f);
	glEnd();

    /**
	* BISHWAGIT DAS
	* Component: cloud
	***/

	//----------------------------------------------------------------------------------
	 GLfloat x=0.6f; GLfloat y=0.6f; GLfloat radius1=0.18f;
    int q;
	int triangleAmount1 = 20; //# of triangles used to draw circle
	GLfloat twicePi1 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
		glColor3ub(203, 242, 247);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();



    /**
	* BISHWAGIT DAS
	*  cloud using glScalef
	***/


glBegin(GL_QUADS);              // road component last 1
	glColor3ub(50,205,50); // lime green
	glVertex2f(-35.0f, -35.0f);    // x, y
    glVertex2f(35.0f, -35.0f);
    glVertex2f(35.0f, -30.0f);
	glVertex2f(-35.0f, -30.0f);    // x, y

	glEnd();

	glBegin(GL_QUADS);              // road component last 2
	glColor3ub(147, 205, 92); // grass 1 color
	glVertex2f(-35.0f, -35.0f);    // x, y
    glVertex2f(35.0f, -35.0f);
    glVertex2f(35.0f, -33.0f);
	glVertex2f(-35.0f, -33.0f);    // x, y

	glEnd();



	glBegin(GL_QUADS);              // road component last 3
	glColor3ub(208, 211, 212); // lawn green
	glVertex2f(-35.0f, -32.0f);    // x, y
    glVertex2f(35.0f, -32.0f);
    glVertex2f(35.0f, -30.0f);
	glVertex2f(-35.0f, -30.0f);    // x, y

	glEnd();

	glBegin(GL_QUADS);              // road component last 4
	glColor3ub(66, 73, 73); // dim grey
	glVertex2f(-35.0f, -30.0f);    // x, y
    glVertex2f(35.0f, -30.0f);
    glVertex2f(35.0f, -15.0f);
	glVertex2f(-35.0f, -15.0f);    // x, y

	glEnd();


	glBegin(GL_QUADS);              // road block component 1 to 5
	glColor3ub(208, 211, 212); // dim grey
	glVertex2f(-33.0f, -23.5f);    // x, y
    glVertex2f(-23.0f, -23.5f);
    glVertex2f(-23.0f, -21.5f);
	glVertex2f(-33.0f, -21.5f);    // x, y



	glVertex2f(-18.0f, -23.5f);    // x, y
    glVertex2f(-8.0f, -23.5f);
    glVertex2f(-8.0f, -21.5f);
	glVertex2f(-18.0f, -21.5f);    // x, y




	glVertex2f(-3.0f, -23.5f);    // x, y
    glVertex2f(7.0f, -23.5f);
    glVertex2f(7.0f, -21.5f);
	glVertex2f(-3.0f, -21.5f);    // x, y




	glVertex2f(12.0f, -23.5f);    // x, y
    glVertex2f(22.0f, -23.5f);
    glVertex2f(22.0f, -21.5f);
	glVertex2f(12.0f, -21.5f);    // x, y



	glVertex2f(27.0f, -23.5f);    // x, y
    glVertex2f(35.0f, -23.5f);
    glVertex2f(35.0f, -21.5f);
	glVertex2f(27.0f, -21.5f);    // x, y




	glEnd();



	glBegin(GL_QUADS);              // road component last 5
	glColor3ub(236, 235, 241); // dim grey
	glVertex2f(-35.0f, -15.0f);    // x, y
    glVertex2f(35.0f, -15.0f);
    glVertex2f(35.0f, -9.0f);
	glVertex2f(-35.0f, -9.0f);    // x, y

	glEnd();

	glBegin(GL_QUADS);              // road component last 6
	glColor3ub(50,205,50); // dim grey
	glVertex2f(4.0f, -13.0f);    // x, y
    glVertex2f(35.0f, -13.0f);
    glVertex2f(35.0f, -9.0f);
	glVertex2f(4.0f, -9.0f);    // x, y

	glEnd();

	glBegin(GL_QUADS);              // road component last 7
	glColor3ub(147, 205, 92); // grass 1 color
	glVertex2f(5.0f, -12.0f);    // x, y
    glVertex2f(35.0f, -12.0f);
    glVertex2f(35.0f, -9.0f);
	glVertex2f(5.0f, -9.0f);    // x, y

	glEnd();

    glBegin(GL_QUADS);              // road component last 8
	glColor3ub(50,205,50); // dim grey
	glVertex2f(1.0f, -13.0f);    // x, y
    glVertex2f(-35.0f, -13.0f);
    glVertex2f(-35.0f, -9.0f);
	glVertex2f(1.0f, -9.0f);    // x, y

	glEnd();

	glBegin(GL_QUADS);              // road component last 9
	glColor3ub(147, 205, 92); // grass 1 color
	glVertex2f(0.0f, -12.0f);    // x, y
    glVertex2f(-35.0f, -12.0f);
    glVertex2f(-35.0f, -9.0f);
	glVertex2f(0.0f, -9.0f);    // x, y
	glEnd();

	//tAnjimul islam


	/********************************
	* MD. Tanjimul Islam
	* Bus1 code start
	***************************/


    glPushMatrix();
    glTranslatef(bus1Position,0.0f, 0.0f);


	//Full Body of yellow bus1
    glBegin(GL_QUADS);
	glColor3ub(254,192,0); // yellow
	glVertex2f(5.00f, -20.0f);
    glVertex2f(16.0f, -20.0f);
    glVertex2f(16.0f, -16.0f);
	glVertex2f(5.0f, -16.0f);
	glEnd();


    // engine side of yellow bus1
	glBegin(GL_QUADS);
	glColor3ub(254,192,0); // yellow
	glVertex2f(5.00f, -18.5f);
    glVertex2f(17.50f, -18.5f);
    glVertex2f(17.5f, -20.0f);
	glVertex2f(5.0f, -20.0f);
	glEnd();

    // window 1 of bus1
	glBegin(GL_QUADS);
	glColor3ub(50,44,44);
    glVertex2f(6.00f, -18.5f);
    glVertex2f(7.5f, -18.5f);
    glVertex2f(7.5f, -17.0f);
    glVertex2f(6.00f, -17.0f);
	glEnd();



    // window 2 of bus1
    //glLoadIdentity();
	//glTranslatef(1.7f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(50,44,44);
    glVertex2f(7.70f, -18.5f);
    glVertex2f(9.2f, -18.5f);
    glVertex2f(9.2f, -17.0f);
    glVertex2f(7.70f, -17.0f);
	glEnd();


	// window 3 of bus1


    //glLoadIdentity();
	//glTranslatef(3.4f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(50,44,44);
    glVertex2f(9.40f, -18.5f);
    glVertex2f(10.9f, -18.5f);
    glVertex2f(10.9f, -17.0f);
    glVertex2f(9.40f, -17.0f);
	glEnd();



    // gate 1 of bus1
    //glLoadIdentity();
	//glTranslatef(5.1f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(50,44,44);
    glVertex2f(11.10f, -18.5f);
    glVertex2f(12.6f, -18.5f);
    glVertex2f(12.6f, -17.0f);
    glVertex2f(11.10f, -17.0f);
	glEnd();


    //glLoadIdentity();
	//glTranslatef(6.8f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(50,44,44);
    glVertex2f(12.80f, -18.5f);
    glVertex2f(14.3f, -18.5f);
    glVertex2f(14.3f, -17.0f);
    glVertex2f(12.80f, -17.0f);
	glEnd();


    //glLoadIdentity();
	//glTranslatef(6.8f, -1.3f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(50,44,44);
    glVertex2f(12.80f, -19.8f);
    glVertex2f(14.3f, -19.8f);
    glVertex2f(14.3f, -18.3f);
    glVertex2f(12.80f, -18.3f);
	glEnd();

    //glLoadIdentity();



    glBegin(GL_POLYGON);
    glColor3ub(137,137,137); // dim grey
    glVertex2f(15.00f, -18.50f);
    glVertex2f(17.00f, -18.50f);
    glVertex2f(16.00f, -17.0f);
    glVertex2f(15.00f, -17.00f);

    glEnd();


    // bus1 font glass border
    glLineWidth(1.00);
    glBegin(GL_LINES);
    glColor3ub(254,192,0);
    glVertex2f(16.00f, -17.0f);
    glVertex2f(17.00f, -18.50f);
    glEnd();


    // bus1 light
    glLineWidth(5.00);
    glBegin(GL_LINES);
    glColor3ub(189, 33, 0);
    glVertex2f(17.50f, -19.00f);
    glVertex2f(17.50f, -19.50f);
    glEnd();


    // bus1 body bit 1
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3ub(50, 44, 44);
    glVertex2f(5.2f, -19.0f);
    glVertex2f(12.00f, -19.0f);
    glEnd();


    // bus1 body bit 2
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3ub(50, 44, 44);
    glVertex2f(5.2f, -19.5f);
    glVertex2f(12.00f, -19.5f);
    glEnd();


     /****
	* MD. TANJIMUL ISLAM
	*  Bus1 tyre1
	***/
	glBegin(GL_TRIANGLE_FAN);
	x=7.0f; y=-19.8f; radius1=0.85f;
		glColor3ub(42, 55, 74);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


	glBegin(GL_TRIANGLE_FAN);
	x=7.0f; y=-19.8f; radius1=0.45f;
		glColor3ub(205, 204, 209);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();



    /****
	* MD. TANJIMUL ISLAM
	*  Bus1 tyre2
	***/
	glBegin(GL_TRIANGLE_FAN);
	x=16.0f; y=-19.8f; radius1=0.85f;
		glColor3ub(42, 55, 74);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();



	glBegin(GL_TRIANGLE_FAN);
	x=16.0f; y=-19.8f; radius1=0.45f;
		glColor3ub(205, 204, 209);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


	glPopMatrix();




    /******
    * Bus2 Code start
    ******/

    /****
	* MD. TANJIMUL ISLAM
	*  Bus2 Body
	***/


    glPushMatrix();
    glTranslatef(bus2Position,0.0f, 0.0f);


    glBegin(GL_QUADS);
	glColor3ub(67, 93, 195); // yellow
	glVertex2f(-24.0f, -28.0f);
    glVertex2f(-10.0f, -28.0f);
    glVertex2f(-10.0f, -24.0f);
	glVertex2f(-24.0f, -24.0f);
	glEnd();


	/****
	* MD. TANJIMUL ISLAM
	*  bus2 Full Body bit
	***/
	glLineWidth(0.85);
    glBegin(GL_LINES);
	glColor3ub(26, 26, 0); // yellow
	glVertex2f(-24.0f, -28.0f);
    glVertex2f(-10.0f, -28.0f);

    glVertex2f(-10.0f, -28.0f);
    glVertex2f(-10.0f, -24.0f);

    glVertex2f(-10.0f, -24.0f);
    glVertex2f(-24.0f, -24.0f);

	glVertex2f(-24.0f, -24.0f);
	glVertex2f(-24.0f, -28.0f);
	glEnd();


    /****
	* MD. TANJIMUL ISLAM
	*  bus2 head light
	***/
    glLineWidth(5.00);
    glBegin(GL_LINES);
    glColor3ub(189, 33, 0);
    glVertex2f(-23.8f, -27.00f);
    glVertex2f(-23.8f, -27.50f);
    glEnd();


    /****
	* MD. TANJIMUL ISLAM
	*  bus2 back bit font
	***/
    glBegin(GL_QUADS);
	glColor3ub(50, 44, 44); // yellow
	glVertex2f(-24.0f, -28.0f);
    glVertex2f(-23.0f, -28.0f);
    glVertex2f(-23.0f, -27.50f);
	glVertex2f(-24.0f, -27.50f);
	glEnd();


	/****
	* MD. TANJIMUL ISLAM
	*  bus2 view glass
	***/
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(-23.5f, -27.0f);
    glVertex2f(-24.0f, -27.0f);
    glVertex2f(-24.0f, -24.5f);
	glVertex2f(-23.5f, -24.5f);
	glEnd();


	/****
	* MD. TANJIMUL ISLAM
	*  bus2 back bit back
	***/
	//glLoadIdentity();
	//glTranslatef(13.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(50, 44, 44); // yellow
	glVertex2f(-11.0f, -28.0f);
    glVertex2f(-10.0f, -28.0f);
    glVertex2f(-10.0f, -27.50f);
	glVertex2f(-11.0f, -27.50f);
	glEnd();
    //glLoadIdentity();


    /****
	* MD. TANJIMUL ISLAM
	*  bus2 door1
	***/
	glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(26, 26, 0); // yellow
	glVertex2f(-23.0f, -27.5f);
	glVertex2f(-22.0f, -27.5f);

    glVertex2f(-22.0f, -27.5f);
    glVertex2f(-22.0f, -24.5f);

    glVertex2f(-22.0f, -24.5f);
    glVertex2f(-23.0f, -24.5f);

	glVertex2f(-23.0f, -24.5f);
	glVertex2f(-23.0f, -27.5f);
	glEnd();


	/****
	* MD. TANJIMUL ISLAM
	*  bus2 door inner1
	***/
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(-22.75f, -26.25f);
    glVertex2f(-22.25f, -26.25f);
    glVertex2f(-22.25f, -24.75f);
	glVertex2f(-22.75f, -24.75f);
	glEnd();


    /****
	* MD. TANJIMUL ISLAM
	*  bus2 door2
	***/

    //glLoadIdentity();
	//glTranslatef(1.2f, 0.0f, 0.0f);
	glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(26, 26, 0); // yellow
	glVertex2f(-21.8f, -27.5f);
	glVertex2f(-20.8f, -27.5f);

    glVertex2f(-20.8f, -27.5f);
    glVertex2f(-20.8f, -24.5f);

    glVertex2f(-20.8f, -24.5f);
    glVertex2f(-21.8f, -24.5f);

	glVertex2f(-21.8f, -24.5f);
	glVertex2f(-21.8f, -27.5f);
	glEnd();



	/****
	* MD. TANJIMUL ISLAM
	*  bus2 door inner2
	***/
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(-21.55f, -26.25f);
    glVertex2f(-21.05f, -26.25f);
    glVertex2f(-21.05f, -24.75f);
	glVertex2f(-21.55f, -24.75f);
	glEnd();
    //glLoadIdentity();


    /****
	* MD. TANJIMUL ISLAM
	*  bus2 window1
	***/
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(-20.0f, -26.0f);
    glVertex2f(-20.0f, -24.75f);
    glVertex2f(-18.5f, -24.75f);
	glVertex2f(-18.5f, -26.0f);
	glEnd();
    //glLoadIdentity();


    /****
	* MD. TANJIMUL ISLAM
	*  bus2 window2
	***/
    //glLoadIdentity();
	//glTranslatef(2.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(-18.0f, -26.0f);
    glVertex2f(-18.0f, -24.75f);
    glVertex2f(-16.5f, -24.75f);
	glVertex2f(-16.5f, -26.0f);
	glEnd();
    //glLoadIdentity();



    /****
	* MD. TANJIMUL ISLAM
	*  bus2 window3
	***/
    //glLoadIdentity();
	//glTranslatef(4.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(-16.0f, -26.0f);
    glVertex2f(-16.0f, -24.75f);
    glVertex2f(-14.5f, -24.75f);
	glVertex2f(-14.5f, -26.0f);
	glEnd();
    //glLoadIdentity();



    /****
	* MD. TANJIMUL ISLAM
	*  bus2 window4
	***/
    //glLoadIdentity();
	//glTranslatef(6.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(-14.0f, -26.0f);
    glVertex2f(-14.0f, -24.75f);
    glVertex2f(-12.5f, -24.75f);
	glVertex2f(-12.5f, -26.0f);
	glEnd();
    //glLoadIdentity();



    /****
	* MD. TANJIMUL ISLAM
	*  bus2 window4
	***/
    //glLoadIdentity();
	//glTranslatef(8.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(-12.0f, -26.0f);
    glVertex2f(-12.0f, -24.75f);
    glVertex2f(-10.5f, -24.75f);
	glVertex2f(-10.5f, -26.0f);
	glEnd();
    //glLoadIdentity();



    /****
	* MD. TANJIMUL ISLAM
	*  bus2 box1
	***/
    //glLoadIdentity();
	//glTranslatef(8.0f, 0.0f, 0.0f);
	glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(26, 26, 0); // yellow
	glVertex2f(-19.0f,  -27.8f);
	glVertex2f(-17.0f, -27.8f);

    glVertex2f(-17.0f, -27.8f);
    glVertex2f(-17.0f, -26.5f);

    glVertex2f(-17.0f, -26.5f);
    glVertex2f(-19.0f,  -26.5f);

	glVertex2f(-19.0f,  -26.5f);
	glVertex2f(-19.0f,  -27.8f);
	glEnd();
    //glLoadIdentity();


    /****
	* MD. TANJIMUL ISLAM
	*  bus2 box
	***/
    //glLoadIdentity();
	//glTranslatef(3.5f, 0.0f, 0.0f);
	glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(26, 26, 0); // yellow
	glVertex2f(-15.5f,  -27.8f);
	glVertex2f(-13.5f, -27.8f);

    glVertex2f(-13.5f, -27.8f);
    glVertex2f(-13.5f, -26.5f);

    glVertex2f(-13.5f, -26.5f);
    glVertex2f(-15.5f,  -26.5f);

	glVertex2f(-15.5f,  -26.5f);
	glVertex2f(-15.5f,  -27.8f);
	glEnd();
    //glLoadIdentity();



     /****
	* MD. TANJIMUL ISLAM
	*  Bus2 tyre1
	***/
	glBegin(GL_TRIANGLE_FAN);
	x=-22.7f; y=-27.9f; radius1=0.85f;
		glColor3ub(42, 55, 74);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


	glBegin(GL_TRIANGLE_FAN);
	x=-22.7f; y=-27.9f; radius1=0.45f;
		glColor3ub(205, 204, 209);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();



    /****
	* MD. TANJIMUL ISLAM
	*  Bus2 tyre2
	***/
	glBegin(GL_TRIANGLE_FAN);
	x=-12.0f; y=-27.9f; radius1=0.85f;
		glColor3ub(42, 55, 74);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	x=-12.0f; y=-27.9f; radius1=0.45f;
		glColor3ub(205, 204, 209);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glPopMatrix();


	/*****.
	* Bus 2 End
	****/





    /******
    * bus3 Code start
    ******/

    glPushMatrix();
    glTranslatef(bus3Position,0.0f, 0.0f);

    /****
	* MD. TANJIMUL ISLAM
	*  bus3 Body
	***/
    glBegin(GL_QUADS);
	glColor3ub(158, 53, 198); // yellow
	glVertex2f(24.0f, -28.0f);
    glVertex2f(10.0f, -28.0f);
    glVertex2f(10.0f, -24.0f);
	glVertex2f(24.0f, -24.0f);
	glEnd();


	/****
	* MD. TANJIMUL ISLAM
	*  bus3 Full Body bit
	***/
	glLineWidth(0.85);
    glBegin(GL_LINES);
	glColor3ub(26, 26, 0); // yellow
	glVertex2f(24.0f, -28.0f);
    glVertex2f(10.0f, -28.0f);

    glVertex2f(10.0f, -28.0f);
    glVertex2f(10.0f, -24.0f);

    glVertex2f(10.0f, -24.0f);
    glVertex2f(24.0f, -24.0f);

	glVertex2f(24.0f, -24.0f);
	glVertex2f(24.0f, -28.0f);
	glEnd();


    /****
	* MD. TANJIMUL ISLAM
	*  bus3 head light
	***/
    glLineWidth(5.00);
    glBegin(GL_LINES);
    glColor3ub(189, 33, 0);
    glVertex2f(10.2f, -27.00f);
    glVertex2f(10.2f, -27.50f);
    glEnd();


    /****
	* MD. TANJIMUL ISLAM
	*  bus3 back bit font
	***/
    glBegin(GL_QUADS);
	glColor3ub(50, 44, 44); // yellow
	glVertex2f(10.0f, -28.0f);
    glVertex2f(11.0f, -28.0f);
    glVertex2f(11.0f, -27.50f);
	glVertex2f(10.0f, -27.50f);
	glEnd();


	/****
	* MD. TANJIMUL ISLAM
	*  bus3 view glass
	***/
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(10.5f, -27.0f);
    glVertex2f(10.0f, -27.0f);
    glVertex2f(10.0f, -24.5f);
	glVertex2f(10.5f, -24.5f);
	glEnd();





    /****
	* MD. TANJIMUL ISLAM
	*  bus3 door1
	***/
	glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(26, 26, 0); // yellow
	glVertex2f(11.0f, -27.5f);
	glVertex2f(12.0f, -27.5f);

    glVertex2f(12.0f, -27.5f);
    glVertex2f(12.0f, -24.5f);

    glVertex2f(12.0f, -24.5f);
    glVertex2f(11.0f, -24.5f);

	glVertex2f(11.0f, -24.5f);
	glVertex2f(11.0f, -27.5f);
	glEnd();


	/****
	* MD. TANJIMUL ISLAM
	*  bus3 door inner1
	***/
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(11.75f, -26.25f);
    glVertex2f(11.25f, -26.25f);
    glVertex2f(11.25f, -24.75f);
	glVertex2f(11.75f, -24.75f);
	glEnd();


    /****
	* MD. TANJIMUL ISLAM
	*  bus3 door2
	***/

    //glLoadIdentity();
	//glTranslatef(1.2f, 0.0f, 0.0f);
	glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(26, 26, 0); // yellow
	glVertex2f(12.2f, -27.5f);
	glVertex2f(13.2f, -27.5f);

    glVertex2f(13.2f, -27.5f);
    glVertex2f(13.2f, -24.5f);

    glVertex2f(13.2f, -24.5f);
    glVertex2f(12.2f, -24.5f);

	glVertex2f(12.2f, -24.5f);
	glVertex2f(12.2f, -27.5f);
	glEnd();



	/****
	* MD. TANJIMUL ISLAM
	*  bus3 door inner2
	***/
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(12.95f, -26.25f);
    glVertex2f(12.45f, -26.25f);
    glVertex2f(12.45f, -24.75f);
	glVertex2f(12.95f, -24.75f);
	glEnd();
    //glLoadIdentity();


    /****
	* MD. TANJIMUL ISLAM
	*  bus3 window1
	***/
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(14.0f, -26.0f);
    glVertex2f(14.0f, -24.75f);
    glVertex2f(15.5f, -24.75f);
	glVertex2f(15.5f, -26.0f);
	glEnd();
   // glLoadIdentity();


    /****
	* MD. TANJIMUL ISLAM
	*  bus3 window2
	***/
    //glLoadIdentity();
	//glTranslatef(2.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(16.0f, -26.0f);
    glVertex2f(16.0f, -24.75f);
    glVertex2f(17.5f, -24.75f);
	glVertex2f(17.5f, -26.0f);
	glEnd();
    //glLoadIdentity();



    /****
	* MD. TANJIMUL ISLAM
	*  bus3 window3
	***/
    //glLoadIdentity();
	//glTranslatef(4.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(18.0f, -26.0f);
    glVertex2f(18.0f, -24.75f);
    glVertex2f(19.5f, -24.75f);
	glVertex2f(19.5f, -26.0f);
	glEnd();
    //glLoadIdentity();



    /****
	* MD. TANJIMUL ISLAM
	*  bus3 window4
	***/
    //glLoadIdentity();
	//glTranslatef(6.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(20.0f, -26.0f);
    glVertex2f(20.0f, -24.75f);
    glVertex2f(21.5f, -24.75f);
	glVertex2f(21.5f, -26.0f);
	glEnd();
    //glLoadIdentity();



    /****
	* MD. TANJIMUL ISLAM
	*  bus3 window5
	***/
    //glLoadIdentity();
	//glTranslatef(8.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(22.0f, -26.0f);
    glVertex2f(22.0f, -24.75f);
    glVertex2f(23.5f, -24.75f);
	glVertex2f(23.5f, -26.0f);
	glEnd();
    //glLoadIdentity();



    /****
	* MD. TANJIMUL ISLAM
	*  bus3 box1
	***/
    //glLoadIdentity();
	//glTranslatef(8.0f, 0.0f, 0.0f);
	glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(26, 26, 0); // yellow
	glVertex2f(16.0f,  -27.8f);
	glVertex2f(14.0f, -27.8f);

    glVertex2f(14.0f, -27.8f);
    glVertex2f(14.0f, -26.5f);

    glVertex2f(14.0f, -26.5f);
    glVertex2f(16.0f,  -26.5f);

	glVertex2f(16.0f,  -26.5f);
	glVertex2f(16.0f,  -27.8f);
	glEnd();
    //glLoadIdentity();


    /****
	* MD. TANJIMUL ISLAM
	*  bus3 box
	***/
   // glLoadIdentity();
	//glTranslatef(3.5f, 0.0f, 0.0f);
	glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(26, 26, 0); // yellow
	glVertex2f(19.5f,  -27.8f);
	glVertex2f(17.5f, -27.8f);

    glVertex2f(17.5f, -27.8f);
    glVertex2f(17.5f, -26.5f);

    glVertex2f(17.5f, -26.5f);
    glVertex2f(19.5f,  -26.5f);

	glVertex2f(19.5f,  -26.5f);
	glVertex2f(19.5f,  -27.8f);
	glEnd();
   // glLoadIdentity();



     /****
	* MD. TANJIMUL ISLAM
	*  bus3 tyre1
	***/
	glBegin(GL_TRIANGLE_FAN);
	x=22.7f; y=-27.9f; radius1=0.85f;
		glColor3ub(42, 55, 74);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


	glBegin(GL_TRIANGLE_FAN);
	x=22.7f; y=-27.9f; radius1=0.45f;
		glColor3ub(205, 204, 209);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();



    /****
	* MD. TANJIMUL ISLAM
	*  bus3 tyre2
	***/
	glBegin(GL_TRIANGLE_FAN);
	x=12.0f; y=-27.9f; radius1=0.85f;
		glColor3ub(42, 55, 74);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	x=12.0f; y=-27.9f; radius1=0.45f;
		glColor3ub(205, 204, 209);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


    glPopMatrix();

	/*****
	* Bus 3 End
	****/



/****
    *BISHWAGIT DAS
    *  DRAW HOUSE
    ***/


/* House*/

    glBegin(GL_QUADS);
	glColor3ub(210,105,30); // yellow
	glVertex2f(0.0f, 0.0f);
    glVertex2f(20.0f, 0.0f);
    glVertex2f(20.0f, -9.0f);
	glVertex2f(0.0f, -9.0f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(91, 63, 71 ); // yellow
	glVertex2f(0.0f, -9.0f);
    glVertex2f(-3.0f, -9.0f);
    glVertex2f(-3.0f, -0.0f);
	glVertex2f(0.0f, -0.0f);
	glEnd();





   //door//
	glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(1.0f, -4.0f);
    glVertex2f(1.0f, -9.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glVertex2f(1.0f, -4.0f);
    glVertex2f(4.0f, -4.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(4.0f, -4.0f);
    glVertex2f(4.0f, -9.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(1.0f, -3.0f);
    glVertex2f(4.0f, -3.0f);
    glEnd();


    glLineWidth(2.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(2.0f, -6.0f);
    glVertex2f(2.0f, -6.5f);
    glEnd();



    //window1//


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(7.0f, -3.0f);
    glVertex2f(7.0f, -7.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(7.0f, -7.0f);
    glVertex2f(11.0f, -7.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(11.0f, -3.0f);
    glVertex2f(11.0f, -7.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(7.0f, -3.0f);
    glVertex2f(11.0f, -3.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(8.5f, -3.0f);
    glVertex2f(8.5f, -7.0f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(52, 152, 219); // yellow
	glVertex2f(7.1f, -3.1f);
    glVertex2f(8.4f, -3.1f);
    glVertex2f(8.4f, -6.9f);
	glVertex2f(7.1f, -6.9f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(52, 152, 219); // yellow
	glVertex2f(8.6f, -3.1f);
    glVertex2f(10.9f, -3.1f);
    glVertex2f(10.9f, -6.9f);
	glVertex2f(8.6f, -6.9f);
	glEnd();


	//window2//
	glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(13.0f, -3.0f);
    glVertex2f(13.0f, -7.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(13.0f, -7.0f);
    glVertex2f(17.0f, -7.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(17.0f, -3.0f);
    glVertex2f(17.0f, -7.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(13.0f, -3.0f);
    glVertex2f(17.0f, -3.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(14.5f, -3.0f);
    glVertex2f(14.5f, -7.0f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(52, 152, 219); // yellow
	glVertex2f(13.1f, -3.1f);
    glVertex2f(14.4f, -3.1f);
    glVertex2f(14.4f, -6.9f);
	glVertex2f(13.1f, -6.9f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(52, 152, 219); // yellow
	glVertex2f(14.6f, -3.1f);
    glVertex2f(16.9f, -3.1f);
    glVertex2f(16.9f, -6.9f);
	glVertex2f(14.6f, -6.9f);
	glEnd();







	///////line right///

	glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -0.5f);
    glVertex2f(21.5f, -0.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -1.0f);
    glVertex2f(21.5f, -1.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -1.5f);
    glVertex2f(21.5f, -1.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -2.0f);
    glVertex2f(21.5f, -2.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -2.5f);
    glVertex2f(21.5f, -2.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -3.0f);
    glVertex2f(21.5f, -3.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -3.5f);
    glVertex2f(21.5f, -3.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -4.0f);
    glVertex2f(21.5f, -4.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -4.5f);
    glVertex2f(21.5f, -4.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -5.0f);
    glVertex2f(21.5f, -5.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -5.5f);
    glVertex2f(21.5f, -5.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -6.0f);
    glVertex2f(21.5f, -6.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -6.5f);
    glVertex2f(21.5f, -6.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -7.0f);
    glVertex2f(21.5f, -7.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -7.5f);
    glVertex2f(21.5f, -7.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -8.0f);
    glVertex2f(21.5f, -8.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(253, 252, 254);
    glVertex2f(18.0f, -8.5f);
    glVertex2f(21.5f, -8.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(65, 2, 19);
    glVertex2f(20.8f, 0.0f);
    glVertex2f(20.8f, -9.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(65, 2, 19);
    glVertex2f(19.0f, 0.0f);
    glVertex2f(19.0f, -9.0f);
    glEnd();


    //line 2 left//


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -0.5f);
    glVertex2f(-3.0f, -0.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -1.0f);
    glVertex2f(-3.0f, -1.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -1.5f);
    glVertex2f(-3.0f, -1.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -2.0f);
    glVertex2f(-3.0f, -2.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -2.5f);
    glVertex2f(-3.0f, -2.5f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -3.0f);
    glVertex2f(-3.0f, -3.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -3.5f);
    glVertex2f(-3.0f, -3.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -4.0f);
    glVertex2f(-3.0f, -4.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -4.5f);
    glVertex2f(-3.0f, -4.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -5.0f);
    glVertex2f(-3.0f, -5.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -5.5f);
    glVertex2f(-3.0f, -5.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -6.0f);
    glVertex2f(-3.0f, -6.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -6.5f);
    glVertex2f(-3.0f, -6.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -7.0f);
    glVertex2f(-3.0f, -7.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -7.5f);
    glVertex2f(-3.0f, -7.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -8.0f);
    glVertex2f(-3.0f, -8.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30);
    glVertex2f(0.0f, -8.5f);
    glVertex2f(-3.0f, -8.5f);
    glEnd();


    //////////////

    glBegin(GL_QUADS);
	glColor3ub(185, 191, 197);
    glVertex2f(-4.0f, 7.0f);
    glVertex2f(22.0f, 7.0f);
    glVertex2f(22.0f, -0.1f);
    glVertex2f(-4.0f, -0.1f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(52, 152, 219);
    glVertex2f(-3.0f, 6.0f);
    glVertex2f(21.0f, 6.0f);
    glVertex2f(21.0f, 1.0f);
    glVertex2f(-3.0f, 1.0f);
	glEnd();

      //window 3//
	glBegin(GL_QUADS);
	glColor3ub(91, 63, 71 );
    glVertex2f(-3.0f, 6.0f);
    glVertex2f(0.0f, 6.0f);
    glVertex2f(0.0f, 1.0f);
    glVertex2f(-3.0f, 1.0f);
	glEnd();




	glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(0.0f, 6.0f);
    glVertex2f(0.0f, 1.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(-3.0f, 6.0f);
    glVertex2f(-3.0f, 1.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(4.0f, 6.0f);
    glVertex2f(4.0f, 1.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(-3.0f, 1.0f);
    glVertex2f(4.0f, 1.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(-3.0f, 6.0f);
    glVertex2f(4.0f, 6.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(0.0f, 3.5f);
    glVertex2f(4.0f, 3.5f);
    glEnd();

    /////line 3///

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(-3.0f, 1.5f);
    glVertex2f(0.0f, 1.5f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(-3.0f, 2.0f);
    glVertex2f(0.0f, 2.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(-3.0f, 2.5f);
    glVertex2f(0.0f, 2.5f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(-3.0f, 3.0f);
    glVertex2f(0.0f,3.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(-3.0f, 3.5f);
    glVertex2f(0.0f, 3.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(-3.0f, 4.0f);
    glVertex2f(0.0f, 4.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(-3.0f, 4.5f);
    glVertex2f(0.0f, 4.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(-3.0f, 5.0f);
    glVertex2f(0.0f, 5.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(-3.0f, 5.5f);
    glVertex2f(0.0f, 5.5f);
    glEnd();




    //////////

    glBegin(GL_QUADS);
	glColor3ub(185, 191, 197 );
    glVertex2f(4.1f, 1.0f);
    glVertex2f(5.5f, 1.0f);
    glVertex2f(5.5f, 6.0f);
    glVertex2f(4.1f, 6.0f);
	glEnd();

	//window 4//

	glBegin(GL_QUADS);
	glColor3ub(91, 63, 71);
    glVertex2f(5.5f, 1.0f);
    glVertex2f(8.5f, 1.0f);
    glVertex2f(8.5f, 6.0f);
    glVertex2f(5.5f, 6.0f);
	glEnd();

	glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(5.5f, 1.0f);
    glVertex2f(12.5f, 1.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(5.5f, 6.0f);
    glVertex2f(12.5f, 6.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(5.5f, 1.0f);
    glVertex2f(5.5f, 6.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(8.5f, 1.0f);
    glVertex2f(8.5f, 6.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(12.5f, 1.0f);
    glVertex2f(12.5f, 6.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(8.5f, 3.5f);
    glVertex2f(12.5f, 3.5f);
    glEnd();


    //line 4///

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(5.5f, 1.5f);
    glVertex2f(8.5f, 1.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(5.5f, 2.0f);
    glVertex2f(8.5f, 2.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(5.5f, 2.5f);
    glVertex2f(8.5f, 2.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(5.5f, 3.0f);
    glVertex2f(8.5f, 3.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(5.5f, 3.5f);
    glVertex2f(8.5f, 3.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(5.5f, 4.0f);
    glVertex2f(8.5f, 4.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(5.5f, 4.5f);
    glVertex2f(8.5f, 4.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(5.5f, 5.0f);
    glVertex2f(8.5f, 5.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(5.5f, 5.5f);
    glVertex2f(8.5f, 5.5f);
    glEnd();


    /////////

    glBegin(GL_QUADS);
	glColor3ub(185, 191, 197 );
    glVertex2f(12.6f, 1.0f);
    glVertex2f(14.0f, 1.0f);
    glVertex2f(14.0f, 6.0f);
    glVertex2f(12.6f, 6.0f);
	glEnd();

	//window 5///


	glBegin(GL_QUADS);
	glColor3ub(91, 63, 71);
    glVertex2f(14.0f, 1.0f);
    glVertex2f(17.0f, 1.0f);
    glVertex2f(17.0f, 6.0f);
    glVertex2f(14.0f, 6.0f);
	glEnd();


	glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(14.0f, 1.0f);
    glVertex2f(21.0f, 1.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(14.0f, 6.0f);
    glVertex2f(21.0f, 6.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(14.0f, 1.0f);
    glVertex2f(14.0f, 6.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(17.0f, 1.0f);
    glVertex2f(17.0f, 6.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(21.0f, 1.0f);
    glVertex2f(21.0f, 6.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2f(17.0f, 3.5f);
    glVertex2f(21.0f, 3.5f);
    glEnd();


    //line 5//

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(14.0f, 1.5f);
    glVertex2f(17.0f, 1.5f);
    glEnd();

     glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(14.0f, 2.0f);
    glVertex2f(17.0f, 2.0f);
    glEnd();

     glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(14.0f, 2.5f);
    glVertex2f(17.0f, 2.5f);
    glEnd();

     glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(14.0f, 3.0f);
    glVertex2f(17.0f, 3.0f);
    glEnd();

     glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(14.0f, 3.5f);
    glVertex2f(17.0f, 3.5f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(14.0f, 4.0f);
    glVertex2f(17.0f, 4.0f);
    glEnd();


     glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(14.0f, 4.5f);
    glVertex2f(17.0f, 4.5f);
    glEnd();

     glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(14.0f, 5.0f);
    glVertex2f(17.0f, 5.0f);
    glEnd();

     glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(89, 8, 30 );
    glVertex2f(14.0f, 5.5f);
    glVertex2f(17.0f, 5.5f);
    glEnd();




    //house 2//

    glBegin(GL_QUADS);
	glColor3ub(185, 191, 197);
    glVertex2f(-6.0f, 1.0f);
    glVertex2f(-7.0f, 1.0f);
    glVertex2f(-7.0f, -9.0f);
    glVertex2f(-6.0f, -9.0f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(52, 152, 219);
    glVertex2f(-7.0f, 1.0f);
    glVertex2f(-18.0f, 1.0f);
    glVertex2f(-18.0f, -9.0f);
    glVertex2f(-7.0f, -9.0f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(185, 191, 197);
    glVertex2f(-18.0f, 1.0f);
    glVertex2f(-21.0f, 1.0f);
    glVertex2f(-21.0f, -9.0f);
    glVertex2f(-18.0f, -9.0f);
	glEnd();






    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0 );
    glVertex2f(-7.0f, 1.0f);
    glVertex2f(-7.0f, -9.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0 );
    glVertex2f(-7.0f, -9.0f);
    glVertex2f(-18.0f, -9.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0 );
    glVertex2f(-9.0f, 1.0f);
    glVertex2f(-9.0f, -9.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0 );
    glVertex2f(-18.0f, 1.0f);
    glVertex2f(-18.0f, -9.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0 );
    glVertex2f(-7.0f, 1.0f);
    glVertex2f(-18.0f, 1.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0 );
    glVertex2f(-7.0f, -1.5f);
    glVertex2f(-18.0f, -1.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0 );
    glVertex2f(-13.0f, 1.0f);
    glVertex2f(-13.0f, -9.0f);
    glEnd();

    //line 6//

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, 0.5f);
    glVertex2f(-18.0f, 0.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, 0.0f);
    glVertex2f(-18.0f, 0.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -0.5f);
    glVertex2f(-18.0f, -0.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -1.0f);
    glVertex2f(-18.0f, -1.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -1.5f);
    glVertex2f(-18.0f, -1.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -2.0f);
    glVertex2f(-18.0f, -2.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -2.5f);
    glVertex2f(-18.0f, -2.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -3.0f);
    glVertex2f(-18.0f, -3.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -3.5f);
    glVertex2f(-18.0f, -3.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -4.0f);
    glVertex2f(-18.0f, -4.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -4.5f);
    glVertex2f(-18.0f, -4.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -5.0f);
    glVertex2f(-18.0f, -5.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -5.5f);
    glVertex2f(-18.0f, -5.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -6.0f);
    glVertex2f(-18.0f, -6.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -6.5f);
    glVertex2f(-18.0f, -6.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -7.0f);
    glVertex2f(-18.0f, -7.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -7.5f);
    glVertex2f(-18.0f, -7.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -8.0f);
    glVertex2f(-18.0f, -8.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(33, 47, 60);
    glVertex2f(-13.0f, -8.5f);
    glVertex2f(-18.0f, -8.5f);
    glEnd();

    ////////

    glBegin(GL_QUADS);
	glColor3ub(44, 62, 80);
    glVertex2f(-4.0f, 1.0f);
    glVertex2f(-22.5f, 1.0f);
    glVertex2f(-22.5f, 2.5f);
    glVertex2f(-4.0f, 2.5f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(44, 62, 80);
    glVertex2f(-18.0f, 2.5f);
    glVertex2f(-22.5f, 2.5f);
    glVertex2f(-22.5f, 10.0f);
    glVertex2f(-18.0f, 10.0f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(44, 62, 80);
    glVertex2f(0.0f, 8.5f);
    glVertex2f(-18.0f, 8.5f);
    glVertex2f(-18.0f, 10.0f);
    glVertex2f(0.0f, 10.0f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(52, 152, 219);
    glVertex2f(-6.5f, 2.5f);
    glVertex2f(-18.0f, 2.5f);
    glVertex2f(-18.0f, 8.5f);
    glVertex2f(-6.5f, 8.5f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(44, 62, 80);
    glVertex2f(-10.5f, 2.5f);
    glVertex2f(-10.0f, 2.5f);
    glVertex2f(-10.0f, 8.5f);
    glVertex2f(-10.5f, 8.5f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(44, 62, 80);
    glVertex2f(-14.5f, 2.5f);
    glVertex2f(-14.0f, 2.5f);
    glVertex2f(-14.0f, 8.5f);
    glVertex2f(-14.5f, 8.5f);
	glEnd();


	glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42);
    glVertex2f(-8.5f, 8.5f);
    glVertex2f(-8.5f, 2.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42);
    glVertex2f(-6.5f, 8.5f);
    glVertex2f(-6.5f, 2.5f);
    glEnd();


    //////line 7///

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(185, 191, 197);
    glVertex2f(-9.5f, 8.5f);
    glVertex2f(-5.5f, 8.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(185, 191, 197);
    glVertex2f(-9.5f, 8.0f);
    glVertex2f(-5.5f, 8.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(185, 191, 197);
    glVertex2f(-9.5f, 7.5f);
    glVertex2f(-5.5f, 7.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(185, 191, 197);
    glVertex2f(-9.5f, 7.0f);
    glVertex2f(-5.5f, 7.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(185, 191, 197);
    glVertex2f(-9.5f, 6.5f);
    glVertex2f(-5.5f, 6.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(185, 191, 197);
    glVertex2f(-9.5f, 6.0f);
    glVertex2f(-5.5f, 6.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(185, 191, 197);
    glVertex2f(-9.5f, 5.5f);
    glVertex2f(-5.5f, 5.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(185, 191, 197);
    glVertex2f(-9.5f, 5.0f);
    glVertex2f(-5.5f, 5.0f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(185, 191, 197);
    glVertex2f(-9.5f, 4.5f);
    glVertex2f(-5.5f, 4.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(185, 191, 197);
    glVertex2f(-9.5f, 4.0f);
    glVertex2f(-5.5f, 4.0f);
    glEnd();
    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(185, 191, 197);
    glVertex2f(-9.5f, 3.5f);
    glVertex2f(-5.5f, 3.5f);
    glEnd();

    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(185, 191, 197);
    glVertex2f(-9.5f, 3.0f);
    glVertex2f(-5.5f, 3.0f);
    glEnd();


    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(185, 191, 197);
    glVertex2f(-9.5f, 2.5f);
    glVertex2f(-5.5f, 2.5f);
    glEnd();



    ////tree1///

    glBegin(GL_TRIANGLES);
    glColor3ub(25, 111, 61);
    glVertex2f(28.5f, -2.0f);
    glVertex2f(23.0f, -6.0f);
    glVertex2f(34.0f, -6.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(34, 153, 84);
    glVertex2f(28.5f, 0.0f);
    glVertex2f(23.0f, -4.5f);
    glVertex2f(34.0f, -4.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(25, 111, 61);
    glVertex2f(28.5f, 1.0f);
    glVertex2f(23.0f, -3.0f);
    glVertex2f(34.0f, -3.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(34, 153, 84);
    glVertex2f(28.5f, 4.0f);
    glVertex2f(23.0f, -1.5f);
    glVertex2f(34.0f, -1.5f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(25, 111, 61);
    glVertex2f(28.5f, 2.0f);
    glVertex2f(23.5f, -0.2f);
    glVertex2f(33.5f, -0.2f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(120, 64, 73);
	glVertex2f(27.5f, -6.0f);
    glVertex2f(29.5f, -6.0f);
	glVertex2f(29.5f, -9.0f);
    glVertex2f(27.5f, -9.0f);
	glEnd();

    /****
	* MD. TANJIMUL ISLAM
	*  road top railing1 left
	***/
    glLineWidth(5.50);
    glBegin(GL_LINES);
    glColor3ub(203, 204, 206);
    glVertex2f(-34.0f, -11.0f);
    glVertex2f(-34.0f, -7.7f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-33.98f; y=-7.8f; radius1=0.27f;
		glColor3ub(203, 204, 206);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


    /****
    * MD. TANJIMUL ISLAM
    *  road top railing left tie1
    ***/
    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(203, 204, 206);
    glVertex2f(-34.0f, -8.4f);
    glVertex2f(-9.0f, -8.4f);
    glEnd();

    /****
    * MD. TANJIMUL ISLAM
    *  road top railing left tie2
    ***/
    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(203, 204, 206);
    glVertex2f(-34.0f, -10.0f);
    glVertex2f(-9.0f, -10.0f);
    glEnd();



    /****
	* MD. TANJIMUL ISLAM
	*  road top railing1 right
	***/
    glLineWidth(5.50);
    glBegin(GL_LINES);
    glColor3ub(203, 204, 206);
    glVertex2f(8.0f, -11.0f);
    glVertex2f(8.0f, -7.7f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=7.98f; y=-7.8f; radius1=0.27f;
		glColor3ub(203, 204, 206);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


    /****
    * MD. TANJIMUL ISLAM
    *  road top railing loop left
    ***/
    for(float railingCounter2=0;railingCounter2<=26;railingCounter2++)
    {
        glLoadIdentity();
        glTranslatef(railingCounter2, 0.0f, 0.0f);

        glLineWidth(5.50);
        glBegin(GL_LINES);
        glColor3ub(203, 204, 206);
        glVertex2f(8.0f, -11.0f);
        glVertex2f(8.0f, -7.7f);
        glEnd();

        glBegin(GL_TRIANGLE_FAN);
        x=7.98f; y=-7.8f; radius1=0.27f;
            glColor3ub(203, 204, 206);
            glVertex2f(x, y); // center of circle
            for(q = 0; q <= triangleAmount1;q++) {
                glVertex2f(
                        x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
                    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
                );
            }
        glEnd();
    }
    glLoadIdentity();


        /****
    * MD. TANJIMUL ISLAM
    *  road top railing right tie1
    ***/
    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(203, 204, 206);
    glVertex2f(34.0f, -8.4f);
    glVertex2f(8.0f, -8.4f);
    glEnd();


    /****
    * MD. TANJIMUL ISLAM
    *  road top railing right tie2
    ***/
    glLineWidth(1.50);
    glBegin(GL_LINES);
    glColor3ub(203, 204, 206);
    glVertex2f(34.0f, -10.0f);
    glVertex2f(8.0f, -10.0f);
    glEnd();

 /**************************
	* BISHWAGIT DAS
	* Left Tree Start
	************************************/



    glBegin(GL_POLYGON);
	glColor3ub(120, 64, 73);

	glVertex2f(-26.5f, -5.0f);
    glVertex2f(-28.5f, -5.0f);

    glVertex2f(-28.0f, -6.0f);
    glVertex2f(-28.0f, -7.0f);
    glVertex2f(-28.0f, -8.0f);

	glVertex2f(-28.5f, -9.0f);
    glVertex2f(-26.5f, -9.0f);

	glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(100, 64, 73);

    glVertex2f(-27.5f, -9.0f);
	glVertex2f(-26.0f, -9.0f);

    glVertex2f(-27.0f, -7.0f);

	glVertex2f(-26.0f, -5.0f);
    glVertex2f(-27.5f, -5.0f);

	glEnd();


	glBegin(GL_TRIANGLE_FAN);
	x=-29.5f; y=-4.0f; radius1=01.85f;
    glColor3ub(34, 153, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-32.5f; y=-4.0f; radius1=01.75f;
    glColor3ub(34, 153, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-31.5f; y=-1.5f; radius1=01.75f;
    glColor3ub(34, 153, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-30.0f; y=-0.0f; radius1=01.75f;
    glColor3ub(34, 153, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-27.0f; y=0.5f; radius1=01.75f;
    glColor3ub(34, 153, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-25.0f; y=-0.5f; radius1=01.75f;
    glColor3ub(34, 153, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();





    glBegin(GL_TRIANGLE_FAN);
	x=-27.5f; y=-2.7f; radius1=02.75f;
    glColor3ub(34, 153, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();




    glBegin(GL_TRIANGLE_FAN);
	x=-25.1f; y=-3.9f; radius1=01.95f;
    glColor3ub(34, 153, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-23.7f; y=-2.0f; radius1=01.75f;
    glColor3ub(34, 153, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-22.9f; y=-3.7f; radius1=01.65f;
    glColor3ub(34, 153, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();



    glBegin(GL_TRIANGLE_FAN);
	x=-28.0f; y=-1.7f; radius1=01.25f;
    glColor3ub(25, 111, 61);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-26.5f; y=-1.0f; radius1=01.25f;
    glColor3ub(25, 111, 61);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-25.0f; y=-1.0f; radius1=01.25f;
    glColor3ub(25, 111, 61);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-24.0f; y=-2.5f; radius1=01.25f;
    glColor3ub(25, 111, 61);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-23.5f; y=-3.0f; radius1=01.25f;
    glColor3ub(25, 111, 61);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-25.0f; y=-3.0f; radius1=01.25f;
    glColor3ub(25, 111, 61);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();



    glBegin(GL_TRIANGLE_FAN);
	x=-30.5f; y=-3.5f; radius1=01.25f;
    glColor3ub(34, 133, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-28.5f; y=-3.5f; radius1=01.25f;
    glColor3ub(34, 133, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-26.5f; y=-3.5f; radius1=01.25f;
    glColor3ub(34, 133, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-29.5f; y=-2.5f; radius1=01.25f;
    glColor3ub(34, 133, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLE_FAN);
	x=-27.6f; y=-2.7f; radius1=01.25f;
    glColor3ub(34, 133, 84);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


	/**************************
	* BISHWAGIT DAS
	* Left Tree End
	************************************/



    /****
	* MD. TANJIMUL ISLAM
	*  road top railing loop left
	***/
    for(float railingCounter1=0;railingCounter1<=25;railingCounter1++)
    {
        glLoadIdentity();
        glTranslatef(railingCounter1, 0.0f, 0.0f);

        glLineWidth(5.50);
        glBegin(GL_LINES);
        glColor3ub(203, 204, 206);
        glVertex2f(-34.0f, -11.0f);
        glVertex2f(-34.0f, -7.7f);
        glEnd();

        glBegin(GL_TRIANGLE_FAN);
        x=-33.98f; y=-7.8f; radius1=0.27f;
            glColor3ub(203, 204, 206);
            glVertex2f(x, y); // center of circle
            for(q = 0; q <= triangleAmount1;q++) {
                glVertex2f(
                        x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
                    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
                );
            }
        glEnd();

    }
    glLoadIdentity();


     /**********************
    * BISHWAGIT DAS
    *  LAMPPOST
    ***********************/


    ///LAMPPOST1//

    glLoadIdentity();
	glTranslatef(-12.0f, -0.5f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(52, 73, 94);
	glVertex2f(30.0f, -14.8f);
    glVertex2f(33.0f, -14.8f);
	glVertex2f(33.0f, -13.1f);
    glVertex2f(30.0f, -13.1f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(240, 243, 244);
	glVertex2f(30.5f, -14.0f);
    glVertex2f(32.5f, -14.0f);
	glVertex2f(32.5f, -12.9f);
    glVertex2f(30.5f, -12.9f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(52, 73, 94);
	glVertex2f(31.0f, -13.0f);
    glVertex2f(32.0f, -13.0f);
	glVertex2f(32.0f, -4.0f);
    glVertex2f(31.0f, -4.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(52, 73, 94);
	glVertex2f(27.0f, -4.0f);
    glVertex2f(32.0f, -4.0f);
	glVertex2f(32.0f, -5.0f);
    glVertex2f(27.0f, -5.0f);
	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3ub(247, 249, 249);
	glVertex2f(27.5f, -4.8f);
    glVertex2f(25.0f, -8.0f);
	glVertex2f(30.0f, -8.0f);

	glEnd();
    glLoadIdentity();



    ///LAMPPOST2//

    glLoadIdentity();
	glTranslatef(-48.0f, -0.5f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(52, 73, 94);
	glVertex2f(30.0f, -14.8f);
    glVertex2f(33.0f, -14.8f);
	glVertex2f(33.0f, -13.1f);
    glVertex2f(30.0f, -13.1f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(240, 243, 244);
	glVertex2f(30.5f, -14.0f);
    glVertex2f(32.5f, -14.0f);
	glVertex2f(32.5f, -12.9f);
    glVertex2f(30.5f, -12.9f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(52, 73, 94);
	glVertex2f(31.0f, -13.0f);
    glVertex2f(32.0f, -13.0f);
	glVertex2f(32.0f, -4.0f);
    glVertex2f(31.0f, -4.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(52, 73, 94);
	glVertex2f(27.0f, -4.0f);
    glVertex2f(32.0f, -4.0f);
	glVertex2f(32.0f, -5.0f);
    glVertex2f(27.0f, -5.0f);
	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3ub(247, 249, 249);
	glVertex2f(27.5f, -4.8f);
    glVertex2f(25.0f, -8.0f);
	glVertex2f(30.0f, -8.0f);

	glEnd();
    glLoadIdentity();


    /***********************************
    * Md . tanjimul islam
    * moon code start
    ******************************************/


    glBegin(GL_TRIANGLE_FAN);
        x=-18.0f; y=27.0f; radius1=2.2f;
            glColor3ub(203, 204, 206);
            glVertex2f(x, y); // center of circle
            for(q = 0; q <= triangleAmount1;q++) {
                glVertex2f(
                        x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
                    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
                );
            }
        glEnd();

}



void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);      // Select the Projection matrix for operation
    glLoadIdentity();                 // Reset Projection matrix
    gluOrtho2D(-35.0, 35.0, -35.0, 35.0); // Set clipping area's left, right, bottom, top
    glMatrixMode (GL_MODELVIEW);

    if(dayOn){
        day();
    }
    else if(nightOn){
        night();
    }
    else{
        day();
    }

	glFlush();  // Render now
}


/*void horn()
{
    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME);
    PlaySound("horn.wav", NULL,SND_ASYNC|SND_FILENAME);
}

void roadNoise()
{
    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME);
    PlaySound("road.wav", NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);
}*/

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case '1':
    bus1Speed= bus1Speed + 0.1f;
    break;
case '2':
    bus2Speed = bus2Speed + 0.1f;
    break;

case '3':
    bus3Speed = bus3Speed +0.1f;
    break;



case '4':
    bus1Speed= bus1Speed - 0.1f;
    break;
case '5':
    bus2Speed = bus2Speed - 0.1f;
    break;

case '6':
    bus3Speed = bus3Speed -0.1f;
    break;


case 'd':
    dayOn = true;
    nightOn = false;
    break;


case 'n':
    dayOn = false;
    nightOn = true;
    break;

case 'c':
    cloudSpeed = 0.1;
    break;


/*case 'p':
    horn();
    break;*/

case 's':
    bus1Speed = bus2Speed = bus3Speed = 0.2;
    /*roadNoise();*/
    break;



glutPostRedisplay();


	}
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(1000, 1000);   // Set the window's initial width & height
	glutReshapeWindow(705, 705);
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutTimerFunc(100, bus1Run, 0); //left to right
	glutTimerFunc(100, bus2Run, 0); //Right to left
	glutTimerFunc(100, bus3Run, 0); //Right to left

	glutTimerFunc(100, cloudRun, 0); //left to right

    glutKeyboardFunc(handleKeypress);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
