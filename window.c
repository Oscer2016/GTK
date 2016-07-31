/*************************************************************************
	> File Name: window.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年07月30日 星期六 15时38分36秒
 ************************************************************************/

#include <gtk/gtk.h>

int main(int argc, char *argv[])
{
    GtkWidget *window;
    gtk_init(&argc,&argv);
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    g_signal_connect(G_OBJECT(window),"delete_event",G_CALLBACK(gtk_main_quit),NULL);
    gtk_window_set_title(GTK_WINDOW(window),"一个功能完善的窗口");
    gtk_window_set_default_size(GTK_WINDOW(window),500,100);
    gtk_window_set_position(GTK_WINDOW(window),GTK_WIN_POS_CENTER);
    gtk_widget_show(window);
    gtk_main();

    return FALSE;
}
