/*************************************************************************
	> File Name: table.c
	> Author: hepan
	> Mail: hepansos@gmail.com
	> Created Time: 2016年07月30日 星期六 23时39分38秒
 ************************************************************************/

#include <gtk/gtk.h>

int main(int argc, char *argv[])
{
    GtkWidget *window;
    GtkWidget *table;
    GtkWidget *button;
    GtkWidget *frame;

    gtk_init(&argc,&argv);
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window),"格状容器");
    gtk_window_set_default_size(GTK_WINDOW(window),200,300);
    g_signal_connect(G_OBJECT(window),"destory",G_CALLBACK(gtk_main_quit),NULL);
    gtk_container_set_border_width(GTK_CONTAINER(window),20);
    frame = gtk_frame_new("请注意下列按钮的排列");
    gtk_container_add(GTK_CONTAINER(window),frame);
    table = gtk_table_new(4,4,FALSE);
    gtk_container_set_border_width(GTK_CONTAINER(table),10);
    gtk_table_set_row_spacings(GTK_TABLE(table),5);
    gtk_table_set_col_spacings(GTK_TABLE(table),5);
    gtk_container_add(GTK_CONTAINER(frame),table);
    button = gtk_button_new();
    gtk_table_attach(GTK_TABLE(table),button,0,1,0,1,GTK_FILL,GTK_FILL,0,0);
    //0,0,-1.1
    button = gtk_button_new();  //_with_label("1,3,1,3");
    gtk_table_attach(GTK_TABLE(table),button,1,3,1,3,GTK_FILL,GTK_FILL,0,0);
    //1,1,-3,3
    button = gtk_button_new();  //_with_label("0,1,1,3");
    gtk_table_attach_defaults(GTK_TABLE(table),button,0,1,1,3);
    //0,1,-1,3
    button = gtk_button_new();  //_with_label("1,3,0,1");
    gtk_table_attach_defaults(GTK_TABLE(table),button,1,3,0,1);
    //1,0,-3,1
    button = gtk_button_new();  //_with_label("0,4,3,4");
    gtk_table_attach_defaults(GTK_TABLE(table),button,0,4,3,4);
    //0,3,-4,4
    button = gtk_button_new();  //_with_label("3,4,0,3");
    gtk_table_attach_defaults(GTK_TABLE(table),button,3,4,0,3);
    //3,0,-4,3
    gtk_widget_show_all(window);
    gtk_main();

    return FALSE;
}

