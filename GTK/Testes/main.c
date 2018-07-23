#include<gtk/gtk.h>

static int x;
static int y;

static void set_value(GtkWidget *widget,gpointer data){
    if((long int) data == 1){
        x += 10;
    }
    else if((long int) data == 3){
        x =0;
        y =0;
    }
    else{
        y += 20;
    }
}

static void calcule_value(GtkWidget *widget,gpointer data){
    int z;
    z = x+y;
    g_print("%d\n",z);
}

static void activate(GtkApplication *app,gpointer user_data){
    GtkWidget *window;
    GtkWidget *button;
    GtkWidget *grid;

    window = gtk_application_window_new(app);
    gtk_window_set_default_size(GTK_WINDOW (window),500,500);
    gtk_window_set_title(GTK_WINDOW(window),"Teste");
    gtk_container_set_border_width(GTK_CONTAINER(window),130);

    grid = gtk_grid_new();
    gtk_container_add(GTK_CONTAINER(window),grid);
    gtk_grid_set_row_spacing(GTK_GRID (grid),10);
    gtk_grid_set_column_spacing(GTK_GRID(grid),10);

    button = gtk_button_new_with_label("10");
    g_signal_connect(button,"clicked",G_CALLBACK(set_value),(gpointer) 1 );

    gtk_grid_attach(GTK_GRID(grid),button,0,0,1,1);

    button = gtk_button_new_with_label("20");
    g_signal_connect(button,"clicked",G_CALLBACK(set_value),(gpointer) 2);

    gtk_grid_attach(GTK_GRID(grid),button,1,0,1,1);

    button = gtk_button_new_with_label("Calcular");
    g_signal_connect(button,"clicked",G_CALLBACK(calcule_value),NULL);

    gtk_grid_attach(GTK_GRID(grid),button,0,1,2,1);

    button = gtk_button_new_with_label("Reset");
    g_signal_connect(button,"clicked",G_CALLBACK(set_value),(gpointer) 3);

    gtk_grid_attach(GTK_GRID(grid),button,3,1,1,1);

    gtk_widget_show_all(window);
}

int main(int argc,char *argv[]){
    int status;

    GtkApplication *app;
    app = gtk_application_new("teste.gtk",G_APPLICATION_FLAGS_NONE);
    g_signal_connect(app,"activate",G_CALLBACK(activate),NULL);
    status = g_application_run(G_APPLICATION(app),argc,argv);
    g_object_unref(app);

    return status;
}