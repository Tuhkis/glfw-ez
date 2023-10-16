#include "glfw-ez.c"

int main(int argc, char** argv) {
  glfwInit();
  GLFWwindow* win;
  win = glfwCreateWindow(800, 800, "Title", NULL, NULL);
  while (!glfwWindowShouldClose(win)) {
    glfwPollEvents();
  }
  glfwTerminate();
  return EXIT_SUCCESS;
}
