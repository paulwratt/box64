#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error meh!
#endif

//GO(wl_array_add, 
//GO(wl_array_copy, 
//GO(wl_array_init, 
//GO(wl_array_release, 
//DATA(wl_buffer_interface, 
//DATA(wl_callback_interface, 
//DATA(wl_compositor_interface, 
//DATA(wl_data_device_interface, 
//DATA(wl_data_device_manager_interface, 
//DATA(wl_data_offer_interface, 
//DATA(wl_data_source_interface, 
GO(wl_display_cancel_read, vFp)
GO(wl_display_connect, pFp)
GO(wl_display_connect_to_fd, pFi)
GO(wl_display_create_queue, pFp)
GO(wl_display_disconnect, vFp)
GO(wl_display_dispatch, iFp)
GO(wl_display_dispatch_pending, iFp)
GO(wl_display_dispatch_queue, iFpp)
GO(wl_display_dispatch_queue_pending, iFpp)
GO(wl_display_flush, iFp)
GO(wl_display_get_error, iFp)
GO(wl_display_get_fd, iFp)
//GO(wl_display_get_protocol_error, 
//DATA(wl_display_interface, 
GO(wl_display_prepare_read, iFp)
//GO(wl_display_prepare_read_queue, 
GO(wl_display_read_events, iFp)
GO(wl_display_roundtrip, iFp)
//GO(wl_display_roundtrip_queue, 
//GO(wl_event_queue_destroy, 
//DATA(wl_keyboard_interface, 
//GO(wl_list_empty, 
//GO(wl_list_init, 
//GO(wl_list_insert, 
//GO(wl_list_insert_list, 
//GO(wl_list_length, 
//GO(wl_list_remove, 
//GO(wl_log_set_handler_client, 
//DATA(wl_output_interface, 
//DATA(wl_pointer_interface, 
//GO(wl_proxy_add_dispatcher, 
//GO(wl_proxy_add_listener, 
GO(wl_proxy_create, pFpp)
//GO(wl_proxy_create_wrapper, 
GO(wl_proxy_destroy, vFp)
//GO(wl_proxy_get_class, 
//GO(wl_proxy_get_id, 
//GO(wl_proxy_get_listener, 
//GO(wl_proxy_get_tag, 
//GO(wl_proxy_get_user_data, 
//GO(wl_proxy_get_version, 
//GO(wl_proxy_marshal, 
//GO(wl_proxy_marshal_array, 
//GO(wl_proxy_marshal_array_constructor, 
//GO(wl_proxy_marshal_array_constructor_versioned, 
//GO(wl_proxy_marshal_array_flags, 
//GO(wl_proxy_marshal_constructor, 
//GO(wl_proxy_marshal_constructor_versioned, 
//GO(wl_proxy_marshal_flags, 
//GO(wl_proxy_set_queue, 
//GO(wl_proxy_set_tag, 
//GO(wl_proxy_set_user_data, 
//GO(wl_proxy_wrapper_destroy, 
//DATA(wl_region_interface, 
//DATA(wl_registry_interface, 
//DATA(wl_seat_interface, 
//DATA(wl_shell_interface, 
//DATA(wl_shell_surface_interface, 
//DATA(wl_shm_interface, 
//DATA(wl_shm_pool_interface, 
//DATA(wl_subcompositor_interface, 
//DATA(wl_subsurface_interface, 
//DATA(wl_surface_interface, 
//DATA(wl_touch_interface, 
