#include <memcached.h>
#include <getopt.h>

typedef struct memcached_programs_help_st memcached_programs_help_st;

struct memcached_programs_help_st 
{
  char *not_used_yet;
};

memcached_server_st *parse_opt_servers(char *server_strings);
char *strdup_cleanup(const char *str);
void cleanup(void);
long int timedif(struct timeval a, struct timeval b);
void version_command(char *command_name);
void help_command(char *command_name, char *description,
                  const struct option *long_options,
                  memcached_programs_help_st *options);