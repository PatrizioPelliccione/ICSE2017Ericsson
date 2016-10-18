int __itc_send(
  union itc_msg **msg, 
  itc_mbox_id_t to, 
  itc_mbox_id_t from, 
  const char *file, 
  int line)
{
	int (*__real_itc_send)(
	  union itc_msg **, 
	  itc_mbox_id_t, 
	  itc_mbox_id_t, 
	  const char *, 
	  int) = dlsym(RTLD_NEXT,"__itc_send");
	sleep(1);
	__real_itc_send(msg, to, from, file, line);
} 

