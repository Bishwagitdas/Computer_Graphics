#include <windows.h>
#include <GL/glut.h>

GLfloat i = 0.0f;


void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
void display()
{
    glClearColor(0.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
    glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_QUADS);              // stand
	glColor3f(0.92f, 0.92f, 0.85f); // Red
	glVertex2f(-0.025f, 0.0f);    // x, y
    glVertex2f(-0.025f, -1.0f);
    glVertex2f(0.025f, -1.0f);
	glVertex2f(0.025f, 0.0f);    // x, y

	glEnd();

   glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    //glTranslatef(.1,.1,0);
    glRotatef(i,0,0.0,0.1);//i=how many degree you want to rotate around an axis
    glBegin(GL_TRIANGLES);              // blade left
	glColor3f(0.92f, 0.92f, 0.85f); // Red
	glVertex2f(-0.025f, 0.0f);    // x, y
	glVertex2f(0.025f, 0.0f);    // x, y
	glVertex2f(-0.5f, -0.5f);
    glEnd();
    glPopMatrix();
    i+=0.01f;

    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    //glTranslatef(.1,.1,0);
    glRotatef(i,0,0.0,0.1);//i=how many degree you want to rotate around an axis
    glBegin(GL_TRIANGLES);              // blade right
	glColor3f(0.92f, 0.92f, 0.85f); // Red
	glVertex2f(-0.025f, 0.0f);    // x, y
	glVertex2f(0.025f, 0.0f);    // x, y
	glVertex2f(0.5f, -0.5f);
	glEnd();
    glPopMatrix();
    i+=0.01f;



    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    //glTranslatef(.1,.1,0);
    glRotatef(i,0,0.0,0.1);//i=how many degree you want to rotate around an axis
	glBegin(GL_TRIANGLES);              // blade up
	glColor3f(0.92f, 0.92f, 0.85f); // Red
	glVertex2f(-0.025f, 0.0f);    // x, y
	glVertex2f(0.025f, 0.0f);    // x, y
	glVertex2f(0.0f, 0.6f);
	glEnd();
    glPopMatrix();
    i+=0.012f;



    glBegin(GL_QUADS);              // stand
	glColor3ub(25, 111, 61); // Red
	glVertex2f(-1.0f, -1.0f);    // x, y
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.75f);
	glVertex2f(-1.0f, -0.75f);    // x, y

	glEnd();


    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);          // Initialize GLUT
    glutInitWindowSize(320, 320);
    glutCreateWindow("Model Transform");
    glutDisplayFunc(display);//

    glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
    glutMainLoop();
    return 0;}
