/*************************************************************************
	> File Name: pack.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年07月30日 星期六 23时18分39秒
 ************************************************************************/

#include <gtk/gtk.h>

int main(int argc, char *argv[])
{
    GtkWidget *window;
    GtkWidget *box;
    GtkWidget *button;
    gchar *title = "排列按钮";

    gtk_init(&argc,&argv);
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    g_signal_connect(G_OBJECT(window),"delete_event",G_CALLBACK(gtk_main_quit),NULL);
    gtk_window_set_title(GTK_WINDOW(window),title);
    gtk_window_set_position(GTK_WINDOW(window),GTK_WIN_POS_CENTER);
    gtk_container_set_border_width(GTK_CONTAINER(window),20);
    box = gtk_hbox_new(FALSE,0);
    gtk_container_add(GTK_CONTAINER(window),box);
    button = gtk_button_new_with_label("按钮一");
    gtk_box_pack_start(GTK_BOX(box),button,TRUE,TRUE,3);
    button = gtk_button_new_with_label("按");
    gtk_box_pack_start(GTK_BOX(box),button,FALSE,FALSE,3);
    button = gtk_button_new_with_label("钮");
    gtk_box_pack_start(GTK_BOX(box),button,FALSE,FALSE,3);
    button = gtk_button_new_with_label("二");
    gtk_box_pack_start(GTK_BOX(box),button, FALSE,FALSE,3);
    gtk_widget_show_all(window);
    gtk_main();

    return FALSE;
}

