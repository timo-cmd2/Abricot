EXTERN struct dmap {
  int (*dmap_open)();
  int (*dmap_rw)();
  int (*dmap_close)();
  int dmap_task;
} dmap[];
