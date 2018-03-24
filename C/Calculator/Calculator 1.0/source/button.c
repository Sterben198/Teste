#include"../headers/main.h"

void set_button(GtkBuilder *builder,GObject *buttons){
    
    buttons = gtk_builder_get_object(builder,"0");
    g_signal_connect(buttons,"clicked",G_CALLBACK(set_value),(gpointer) 0);

     buttons = gtk_builder_get_object(builder,"1");
    g_signal_connect(buttons,"clicked",G_CALLBACK(set_value),(gpointer) 1);

     buttons = gtk_builder_get_object(builder,"2");
    g_signal_connect(buttons,"clicked",G_CALLBACK(set_value),(gpointer) 2);

     buttons = gtk_builder_get_object(builder,"3");
    g_signal_connect(buttons,"clicked",G_CALLBACK(set_value),(gpointer) 3);

     buttons = gtk_builder_get_object(builder,"4");
    g_signal_connect(buttons,"clicked",G_CALLBACK(set_value),(gpointer) 4);

     buttons = gtk_builder_get_object(builder,"5");
    g_signal_connect(buttons,"clicked",G_CALLBACK(set_value),(gpointer) 5);

     buttons = gtk_builder_get_object(builder,"6");
    g_signal_connect(buttons,"clicked",G_CALLBACK(set_value),(gpointer) 6);

     buttons = gtk_builder_get_object(builder,"7");
    g_signal_connect(buttons,"clicked",G_CALLBACK(set_value),(gpointer) 7);

     buttons = gtk_builder_get_object(builder,"8");
    g_signal_connect(buttons,"clicked",G_CALLBACK(set_value),(gpointer) 8);

     buttons = gtk_builder_get_object(builder,"9");
    g_signal_connect(buttons,"clicked",G_CALLBACK(set_value),(gpointer) 9);

    buttons = gtk_builder_get_object(builder,"11");
    g_signal_connect(buttons,"clicked",G_CALLBACK(set_op),(gpointer) 1);
    
    buttons = gtk_builder_get_object(builder,"12");
    g_signal_connect(buttons,"clicked",G_CALLBACK(set_op),(gpointer) 2);
    
    buttons = gtk_builder_get_object(builder,"13");
    g_signal_connect(buttons,"clicked",G_CALLBACK(set_op),(gpointer) 3);
    
    buttons = gtk_builder_get_object(builder,"14");
    g_signal_connect(buttons,"clicked",G_CALLBACK(set_op),(gpointer) 4);
}
