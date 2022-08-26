#define GLUT_DISABLE_ATEXIT_HACK
#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <time.h>

// Função callback para desenho
void desenha(void)
{

    // Inicializa o sistema de coordenadas
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    // Define os limites dos eixos x e y
    // Argumentos da função: void gluOrtho2D(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top)
    gluOrtho2D (0.0f, 600.0f, 0.0f, 600.0f);  // (xo, x, yo, y)

	//Limpa todos os pixels com a cor de fundo
	glClear(GL_COLOR_BUFFER_BIT);

	//Configura a cor
    //glColor3f (1.0, 1.0, 1.0); // RGB

    // Desenha um quadrado preenchido com a cor corrente
    glBegin(GL_QUADS);
        glColor3ub(255, 255, 0);//rand()%255, rand()%255, rand()%255);
        glVertex2i(100, 15);
        glVertex2i(100, 350);
        glVertex2i(500, 350);
        glVertex2i(500, 15);

        glColor3ub(0, 255, 0);//rand()%255, rand()%255, rand()%255);
        glVertex2i(170, 350);
        glVertex2i(170, 500);
        glVertex2i(430, 500);
        glVertex2i(500, 350);

        glColor3ub(150, 75, 0);//rand()%255, rand()%255, rand()%255);
        glVertex2i(100, 15);
        glVertex2i(100, 195);
        glVertex2i(220, 195);
        glVertex2i(220, 15);

        glColor3ub(248, 248, 248);//rand()%255, rand()%255, rand()%255);
        glVertex2i(260, 210);
        glVertex2i(260, 308);
        glVertex2i(460, 308);
        glVertex2i(460, 210);
    glEnd();

    glLineWidth(10);
    glBegin(GL_LINES);
        glColor3ub(230, 230, 230);//rand()%255, rand()%255, rand()%255);
        glVertex2i(360, 210);
        glVertex2i(360, 307);

        glColor3ub(230, 230, 230);//rand()%255, rand()%255, rand()%255);
        glVertex2i(260, 259);
        glVertex2i(460, 259);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
        glColor3ub(0, 0, 255);//rand()%255, rand()%255, rand()%255);
        glVertex2i(100, 350);
        glVertex2i(170, 500);
        glVertex2i(240, 350);
    glEnd();

    glPointSize(10.0);
    glBegin(GL_POINTS);
        glColor3ub(0, 0, 0);//rand()%255, rand()%255, rand()%255);
        glVertex2i(205, 105);
    glEnd();

    glPointSize(1.0);
    glBegin(GL_POINTS);
        for(int y=0; y<15; y++)
            for(int x=0; x<600; x++){
                glColor3ub(rand()%255, 255, rand()%255);//rand()%255, rand()%255, rand()%255);
                glVertex2i(x, y);
        }
        glEnd();


	//Habilita a execução de comandos OpenGL
	glFlush();
}

//Inicializa parâmetros
void init (void)
{
    // Configura a cor de fundo como preta
    glClearColor(0.9f, 0.8f, 0.99f, 1.0f);
}

//Principal
int main(void)
{
    srand(time(NULL));
    //Tipo de janela (single-buffered) e cores utilizados
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	//Configura o tamanho da janela
	glutInitWindowSize (600, 600);
	//Configura a posição inicial da janela
	glutInitWindowPosition (360, 100);
	//Configura a janela
	glutCreateWindow("Teste do OpenGL");
	//Chama a função desenha
	glutDisplayFunc(desenha);
	//Inicializa o programa
	init();
	//Habilita o loop (máquina de estados)
	glutMainLoop();
}
