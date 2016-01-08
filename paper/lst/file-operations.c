struct file_operations {
struct module *owner;
loff_t (*llseek) (struct file *, loff_t, int);
ssize_t (*read) (struct file *, char __user *, 
                size_t, loff_t *);
ssize_t (*write) (struct file *, const char __user *,
                 size_t, loff_t *);
ssize_t (*aio_read) (struct kiocb *, 
              const struct iovec *, unsigned long, loff_t);
ssize_t (*aio_write) (struct kiocb *, 
              const struct iovec *, unsigned long, loff_t);
int (*readdir) (struct file *, void *, filldir_t);
int (*open) (struct inode *, struct file *);
int (*flush) (struct file *, fl_owner_t id);

[...]
};