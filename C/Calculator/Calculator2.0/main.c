#include<gtk/gtk.h>
#include<stdlib.h>
#include<stdbool.h>

double x,y,z;
char c;
gchar buffer[50];
bool flag = true;

static void set_value(GtkWidget *widget,gpointer data){

    GtkEntry *entry;
    entry = g_object_get_data(G_OBJECT(widget),"entry");

    if(flag == true){
        x = x * 10;

        x += (long int) data;
        sprintf(buffer,"%g %c %g = %g",x,c,y,z);
        gtk_entry_set_text(entry,buffer);
    }
    else{
        y = y * 10;

        y += (long int) data;
        sprintf(buffer,"%g %c %g = %g",x,c,y,z);
        gtk_entry_set_text(entry,buffer);
    }
}

static void set_op(GtkWidget *widget,gpointer data){
    GtkEntry *entry;
    entry = g_object_get_data(G_OBJECT(widget),"entry");

    switch ((long int) data){
        case 10:
        c = '+';
        break;

        case 11:
        c = '-';
        break;

        case 12:
        c = 'X';
        break;

        case 13:
        c = '/';
        break;
    }
    flag = false;
    sprintf(buffer,"%g %c %g = %g",x,c,y,z);
    gtk_entry_set_text(entry,buffer);
}

static void calcule_value(GtkWidget *widget,gpointer data){
    GtkEntry *entry;
    entry = g_object_get_data(G_OBJECT(widget),"entry");

    switch(c){
        case '+':
        z = x+y;
        break;

        case '-':
        z = x-y;
        break;

        case 'X':
        z = x*y;
        break;

        case '/':
        z = x/y;
        break;
    }

    sprintf(buffer,"%g %c %g = %g",x,c,y,z);
    gtk_entry_set_text(entry,buffer);
    flag = true;
    x = 0;
    y = 0;
    z = 0;
}


int main(int argc,char *argv[]){

    GtkBuilder *builder;
    GObject *button;
    GObject *window;
    GObject *entry;

    gtk_init(&argc,&argv);

    builder = gtk_builder_new();
    gtk_builder_add_from_file(builder,"builder.ui",NULL);

    window = gtk_builder_get_object(builder,"window");
    gtk_container_set_border_width(GTK_CONTAINER(window),10);
    g_signal_connect(window,"destroy",G_CALLBACK(gtk_main_quit),NULL);
    gtk_widget_show_all(GTK_WIDGET(window));


    entry = gtk_builder_get_object(builder,"entry");

    button = gtk_builder_get_object(builder,"0");
    g_object_set_data(G_OBJECT(button),"entry",entry);
    g_signal_connect(button,"clicked",G_CALLBACK(set_value),(gpointer) 0);

    for(long int i=1; i < 10;i++){

        int length = snprintf(NULL,0,"%ld",i);
        char *str = malloc(length+1);
        snprintf(str,length+1,"%ld",i);

        button = gtk_builder_get_object(builder,(gchar *) str);
        g_object_set_data(G_OBJECT(button),"entry",entry);
        g_signal_connect(button,"clicked",G_CALLBACK(set_value),(gpointer) i);

    }

    button = gtk_builder_get_object(builder,"10");
    g_object_set_data(G_OBJECT(button),"entry",entry);
    g_signal_connect(button,"clicked",G_CALLBACK(set_op),(gpointer) 10);

    button = gtk_builder_get_object(builder,"11");
    g_object_set_data(G_OBJECT(button),"entry",entry);
    g_signal_connect(button,"clicked",G_CALLBACK(set_op),(gpointer) 11);

    button = gtk_builder_get_object(builder,"12");
    g_object_set_data(G_OBJECT(button),"entry",entry);
    g_signal_connect(button,"clicked",G_CALLBACK(set_op),(gpointer) 12);

    button = gtk_builder_get_object(builder,"13");
    g_object_set_data(G_OBJECT(button),"entry",entry);
    g_signal_connect(button,"clicked",G_CALLBACK(set_op),(gpointer) 13);


    GdkRGBA color;

    gdk_rgba_parse(&color,"green");

    button = gtk_builder_get_object(builder,"=");
    g_object_set_data(G_OBJECT(button),"entry",entry);
    g_signal_connect(button,"clicked",G_CALLBACK(calcule_value),NULL);
    gtk_widget_override_background_color(GTK_WIDGET(button),GTK_STATE_NORMAL,&color);

    gtk_main();

    return 0;
}