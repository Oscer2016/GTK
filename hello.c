/*************************************************************************
	> File Name: hello.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年07月30日 星期六 15时15分30秒
 ************************************************************************/

#include <gtk/gtk.h>

gint count = 1;
void on_button_clicked(GtkWidget *button,gpointer userdata)
{
    g_print("你好，这是hello功能的测试 .");
    //g_print("hello, this is a test .");
    //g_print("%d\n",(gint)userdata);
    g_print("%d\n",count);
    count = count + 1;
}

int main(int argc, char *argv[])
{
    GtkWidget *window;
    GtkWidget *button;
    
    gtk_init(&argc, &argv);
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    g_signal_connect(G_OBJECT(window),"delete_event",G_CALLBACK(gtk_main_quit),NULL);
    gtk_window_set_title(GTK_WINDOW(window),"hello 功能实现");
    gtk_window_set_default_size(GTK_WINDOW(window),500,100);
    gtk_window_set_position(GTK_WINDOW(window),GTK_WIN_POS_CENTER);
    gtk_container_set_border_width(GTK_CONTAINER(window),40);
    button = gtk_button_new_with_label("按下此按钮会在终端显示一行信息");
    g_signal_connect(G_OBJECT(button),"clicked",G_CALLBACK(on_button_clicked),(gpointer)count);
    gtk_container_add(GTK_CONTAINER(window),button);
    gtk_widget_show(button);
    gtk_widget_show(window);
    gtk_main();

    return FALSE;
}
