#include <GLFW/glfw3.h>

int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(1.0f, 1.0f, 0.0f);
        glBegin(GL_POLYGON);
        

        glVertex2f(-0.5, -0.5);

        glVertex2f(-0.75, 0);

        glVertex2f(-0.5, 0.5);

        glVertex2f(0, 0.75);

        glVertex2f(0.5, 0.5);

        glVertex2f(0.75, 0);

        glVertex2f(0.5, -0.5);

        glVertex2f(0, -0.75);
        glEnd();

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}