#include"button.c"
#include<stdbool.h>

double x,y,z;
int o;
char str[20];
bool flag = true;

static void set_value(GtkWidget *widget,gpointer data){
    if(flag == true){

            x = x *10;

        x += (long int) data;
    }
    else{

            y = y * 10;

        y += (long int) data;
    }
}

static void set_op(GtkWidget *widget,gpointer data){
    o = (long int) data;
    flag = false;
}

static void calcule_value(GtkWidget *widget,gpointer data){
    switch(o){
        case 1:
        z = x+y;
        break;

        case 2:
        z = x-y;
        break;

        case 3:
        z = x*y;
        break;

        case 4:
        z = x / y;
        break;
    }

    sprintf(str,"%g",z);
    gtk_entry_set_text(GTK_ENTRY(data),(gchar *) str);
    x = 0;
    y = 0;
    flag = true;
}

int main(int argc,char *argv[]){


    GtkBuilder *builder;
    GObject *buttons;
    GObject *window;
    GObject *entry;


    gtk_init(&argc,&argv);


    builder = gtk_builder_new();
    gtk_builder_add_from_file(builder,"builder.ui",NULL);

    window = gtk_builder_get_object(builder,"window");
    gtk_container_set_border_width(GTK_CONTAINER(window),10);
    g_signal_connect(window,"destroy",G_CALLBACK(gtk_main_quit),NULL);

    entry = gtk_builder_get_object(builder,"entry");

    set_button(builder,buttons);


    buttons = gtk_builder_get_object(builder,"calcule");
    g_signal_connect(buttons,"clicked",G_CALLBACK(calcule_value),(gpointer) entry);

    gtk_main();


    return 0;
}