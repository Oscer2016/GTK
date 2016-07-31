/*************************************************************************
	> File Name: 3.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年06月10日 星期五 17时34分57秒
 ************************************************************************/

#include <gtk/gtk.h>

int main(int argc, char* argv[])
{
       GtkWidget *window;
       GtkWidget *label;

       gtk_init(&argc, &argv);

       window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

       label = gtk_label_new("Hello World.");

       gtk_container_add(GTK_CONTAINER(window), label);

       gtk_widget_show_all(window);

       gtk_main();

       return 0;

}
