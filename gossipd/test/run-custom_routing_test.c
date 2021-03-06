#include "../routing.c"
#include "../gossip_store.c"
#include <stdio.h>
#include <string.h>

struct broadcast_state *new_broadcast_state(tal_t *ctx UNNEEDED)
{
	return NULL;
}

void status_fmt(enum log_level level UNUSED, const char *fmt, ...)
{
	va_list ap;

	va_start(ap, fmt);
	vprintf(fmt, ap);
	printf("\n");
	va_end(ap);
}

/* AUTOGENERATED MOCKS START */
/* Generated stub for broadcast_del */
void broadcast_del(struct broadcast_state *bstate UNNEEDED, u64 index UNNEEDED, const u8 *payload UNNEEDED)
{ fprintf(stderr, "broadcast_del called!\n"); abort(); }
/* Generated stub for fromwire_channel_announcement */
bool fromwire_channel_announcement(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, secp256k1_ecdsa_signature *node_signature_1 UNNEEDED, secp256k1_ecdsa_signature *node_signature_2 UNNEEDED, secp256k1_ecdsa_signature *bitcoin_signature_1 UNNEEDED, secp256k1_ecdsa_signature *bitcoin_signature_2 UNNEEDED, u8 **features UNNEEDED, struct bitcoin_blkid *chain_hash UNNEEDED, struct short_channel_id *short_channel_id UNNEEDED, struct pubkey *node_id_1 UNNEEDED, struct pubkey *node_id_2 UNNEEDED, struct pubkey *bitcoin_key_1 UNNEEDED, struct pubkey *bitcoin_key_2 UNNEEDED)
{ fprintf(stderr, "fromwire_channel_announcement called!\n"); abort(); }
/* Generated stub for fromwire_channel_update */
bool fromwire_channel_update(const void *p UNNEEDED, secp256k1_ecdsa_signature *signature UNNEEDED, struct bitcoin_blkid *chain_hash UNNEEDED, struct short_channel_id *short_channel_id UNNEEDED, u32 *timestamp UNNEEDED, u8 *message_flags UNNEEDED, u8 *channel_flags UNNEEDED, u16 *cltv_expiry_delta UNNEEDED, u64 *htlc_minimum_msat UNNEEDED, u32 *fee_base_msat UNNEEDED, u32 *fee_proportional_millionths UNNEEDED)
{ fprintf(stderr, "fromwire_channel_update called!\n"); abort(); }
/* Generated stub for fromwire_channel_update_option_channel_htlc_max */
bool fromwire_channel_update_option_channel_htlc_max(const void *p UNNEEDED, secp256k1_ecdsa_signature *signature UNNEEDED, struct bitcoin_blkid *chain_hash UNNEEDED, struct short_channel_id *short_channel_id UNNEEDED, u32 *timestamp UNNEEDED, u8 *message_flags UNNEEDED, u8 *channel_flags UNNEEDED, u16 *cltv_expiry_delta UNNEEDED, u64 *htlc_minimum_msat UNNEEDED, u32 *fee_base_msat UNNEEDED, u32 *fee_proportional_millionths UNNEEDED, u64 *htlc_maximum_msat UNNEEDED)
{ fprintf(stderr, "fromwire_channel_update_option_channel_htlc_max called!\n"); abort(); }
/* Generated stub for fromwire_gossipd_local_add_channel */
bool fromwire_gossipd_local_add_channel(const void *p UNNEEDED, struct short_channel_id *short_channel_id UNNEEDED, struct pubkey *remote_node_id UNNEEDED, u64 *satoshis UNNEEDED)
{ fprintf(stderr, "fromwire_gossipd_local_add_channel called!\n"); abort(); }
/* Generated stub for fromwire_gossip_store_channel_announcement */
bool fromwire_gossip_store_channel_announcement(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, u8 **announcement UNNEEDED, u64 *satoshis UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_store_channel_announcement called!\n"); abort(); }
/* Generated stub for fromwire_gossip_store_channel_delete */
bool fromwire_gossip_store_channel_delete(const void *p UNNEEDED, struct short_channel_id *short_channel_id UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_store_channel_delete called!\n"); abort(); }
/* Generated stub for fromwire_gossip_store_channel_update */
bool fromwire_gossip_store_channel_update(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, u8 **update UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_store_channel_update called!\n"); abort(); }
/* Generated stub for fromwire_gossip_store_local_add_channel */
bool fromwire_gossip_store_local_add_channel(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, u8 **local_add UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_store_local_add_channel called!\n"); abort(); }
/* Generated stub for fromwire_gossip_store_node_announcement */
bool fromwire_gossip_store_node_announcement(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, u8 **announcement UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_store_node_announcement called!\n"); abort(); }
/* Generated stub for fromwire_node_announcement */
bool fromwire_node_announcement(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, secp256k1_ecdsa_signature *signature UNNEEDED, u8 **features UNNEEDED, u32 *timestamp UNNEEDED, struct pubkey *node_id UNNEEDED, u8 rgb_color[3] UNNEEDED, u8 alias[32] UNNEEDED, u8 **addresses UNNEEDED)
{ fprintf(stderr, "fromwire_node_announcement called!\n"); abort(); }
/* Generated stub for fromwire_peektype */
int fromwire_peektype(const u8 *cursor UNNEEDED)
{ fprintf(stderr, "fromwire_peektype called!\n"); abort(); }
/* Generated stub for fromwire_wireaddr */
bool fromwire_wireaddr(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, struct wireaddr *addr UNNEEDED)
{ fprintf(stderr, "fromwire_wireaddr called!\n"); abort(); }
/* Generated stub for insert_broadcast */
u64 insert_broadcast(struct broadcast_state *bstate UNNEEDED, const u8 *msg UNNEEDED,
		     u32 timestamp UNNEEDED)
{ fprintf(stderr, "insert_broadcast called!\n"); abort(); }
/* Generated stub for next_broadcast */
const u8 *next_broadcast(struct broadcast_state *bstate UNNEEDED,
			 u32 timestamp_min UNNEEDED, u32 timestamp_max UNNEEDED,
			 u64 *last_index UNNEEDED)
{ fprintf(stderr, "next_broadcast called!\n"); abort(); }
/* Generated stub for onion_type_name */
const char *onion_type_name(int e UNNEEDED)
{ fprintf(stderr, "onion_type_name called!\n"); abort(); }
/* Generated stub for sanitize_error */
char *sanitize_error(const tal_t *ctx UNNEEDED, const u8 *errmsg UNNEEDED,
		     struct channel_id *channel_id UNNEEDED)
{ fprintf(stderr, "sanitize_error called!\n"); abort(); }
/* Generated stub for status_failed */
void status_failed(enum status_failreason code UNNEEDED,
		   const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "status_failed called!\n"); abort(); }
/* Generated stub for towire_errorfmt */
u8 *towire_errorfmt(const tal_t *ctx UNNEEDED,
		    const struct channel_id *channel UNNEEDED,
		    const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "towire_errorfmt called!\n"); abort(); }
/* Generated stub for towire_gossip_store_channel_announcement */
u8 *towire_gossip_store_channel_announcement(const tal_t *ctx UNNEEDED, const u8 *announcement UNNEEDED, u64 satoshis UNNEEDED)
{ fprintf(stderr, "towire_gossip_store_channel_announcement called!\n"); abort(); }
/* Generated stub for towire_gossip_store_channel_delete */
u8 *towire_gossip_store_channel_delete(const tal_t *ctx UNNEEDED, const struct short_channel_id *short_channel_id UNNEEDED)
{ fprintf(stderr, "towire_gossip_store_channel_delete called!\n"); abort(); }
/* Generated stub for towire_gossip_store_channel_update */
u8 *towire_gossip_store_channel_update(const tal_t *ctx UNNEEDED, const u8 *update UNNEEDED)
{ fprintf(stderr, "towire_gossip_store_channel_update called!\n"); abort(); }
/* Generated stub for towire_gossip_store_local_add_channel */
u8 *towire_gossip_store_local_add_channel(const tal_t *ctx UNNEEDED, const u8 *local_add UNNEEDED)
{ fprintf(stderr, "towire_gossip_store_local_add_channel called!\n"); abort(); }
/* Generated stub for towire_gossip_store_node_announcement */
u8 *towire_gossip_store_node_announcement(const tal_t *ctx UNNEEDED, const u8 *announcement UNNEEDED)
{ fprintf(stderr, "towire_gossip_store_node_announcement called!\n"); abort(); }
/* Generated stub for wire_type_name */
const char *wire_type_name(int e UNNEEDED)
{ fprintf(stderr, "wire_type_name called!\n"); abort(); }
/* AUTOGENERATED MOCKS END */

#if DEVELOPER
/* Generated stub for memleak_remove_htable */
void memleak_remove_htable(struct htable *memtable UNNEEDED, const struct htable *ht UNNEEDED)
{ fprintf(stderr, "memleak_remove_htable called!\n"); abort(); }
/* Generated stub for memleak_remove_intmap_ */
void memleak_remove_intmap_(struct htable *memtable UNNEEDED, const struct intmap *m UNNEEDED)
{ fprintf(stderr, "memleak_remove_intmap_ called!\n"); abort(); }
#endif

int get_index(char node_map[100][100], char *key, int n);

/* Updates existing route if required. */
static void add_connection(struct routing_state *rstate,
					      const struct pubkey *from,
					      const struct pubkey *to,
					      u32 base_fee, s32 proportional_fee,
					      u32 delay)
{
	struct short_channel_id scid;
	struct half_chan *c;
	struct chan *chan;
	int satoshis = 100000;

	/* Make a unique scid. */
	memcpy(&scid, from, sizeof(scid) / 2);
	memcpy((char *)&scid + sizeof(scid) / 2, to, sizeof(scid) / 2);

	chan = get_channel(rstate, &scid);
	if (!chan)
		chan = new_chan(rstate, &scid, from, to, satoshis);

	c = &chan->half[pubkey_idx(from, to)];
	/* Make sure it's seen as initialized (update non-NULL). */
	c->channel_update = (void *)c;
	c->base_fee = base_fee;
	c->proportional_fee = proportional_fee;
	c->delay = delay;
	c->channel_flags = get_channel_direction(from, to);
	c->htlc_minimum_msat = 0;
	c->htlc_maximum_msat = satoshis * 1000;
}

/* Returns chan connecting from and to: *idx set to refer
 * to connection with src=from, dst=to */
static struct chan *find_channel(struct routing_state *rstate UNUSED,
					    const struct node *from,
					    const struct node *to,
					    int *idx)
{
	int i, n;

	*idx = pubkey_idx(&from->id, &to->id);

	n = tal_count(to->chans);
	for (i = 0; i < n; i++) {
		if (to->chans[i]->nodes[*idx] == from)
			return to->chans[i];
	}
	return NULL;
}

static struct half_chan *get_connection(struct routing_state *rstate,
					       const struct pubkey *from_id,
					       const struct pubkey *to_id)
{
	int idx;
	struct node *from, *to;
	struct chan *c;

	from = get_node(rstate, from_id);
	to = get_node(rstate, to_id);
	if (!from || ! to)
		return NULL;

	c = find_channel(rstate, from, to, &idx);
	if (!c)
		return NULL;
	return &c->half[idx];
}
/*
static bool channel_is_between(const struct chan *chan,
			       const struct pubkey *a, const struct pubkey *b)
{
	if (pubkey_eq(&chan->nodes[0]->id, a)
	    && pubkey_eq(&chan->nodes[1]->id, b))
		return true;

	if (pubkey_eq(&chan->nodes[0]->id, b)
	    && pubkey_eq(&chan->nodes[1]->id, a))
		return true;

	return false;
}*/

int get_index(char node_map[100][100], char *key, int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(strcmp(node_map[i], key) == 0) return i;
	}
	return -1;
}

int main(int argc, char **argv)
{
	setup_locale();

	struct routing_state *rstate;
	//struct pubkey a, b, c, d;
	struct privkey tmp;
	u64 fee;
	struct chan **route;
	double riskfactor = 1.0 / BLOCKS_PER_YEAR / 10000;

	secp256k1_ctx = secp256k1_context_create(SECP256K1_CONTEXT_VERIFY
						 | SECP256K1_CONTEXT_SIGN);
	setup_tmpctx();

	
	int number_of_nodes, number_of_edges;
	u64 msatoshi;
	double unscaled_riskfactor;
	double fuzz;
	/* Reading from config file */
	scanf("%d", &number_of_nodes);
	scanf("%d", &number_of_edges);
	scanf("%ld", &msatoshi);
	scanf("%lf", &fuzz);
	scanf("%ld", &fee);
	scanf("%lf", &unscaled_riskfactor);
	riskfactor = unscaled_riskfactor / BLOCKS_PER_YEAR / 10000;
	struct pubkey *nodes;
	//char index_map[100][100];
	nodes = malloc(number_of_nodes * sizeof(struct pubkey));
	char node_map[100][100];
	rstate = new_routing_state(tmpctx, NULL, &nodes[0], 0);
	int i;
	for(i = 0; i < number_of_nodes; i++) {
		memset(&tmp, i+'0', sizeof(tmp));
		pubkey_from_privkey(&tmp, &nodes[i]);		
		new_node(rstate, &nodes[i]);
	}
	int n1, n2, flag, base_fee, proportional_fee, delay;
	for(i = 0; i < number_of_edges; i++) {
		scanf("%d", &n1);
		scanf("%d", &n2);
		scanf("%d", &base_fee);
		scanf("%d", &proportional_fee);
		scanf("%d", &delay);
		scanf("%d", &flag);
		add_connection(rstate, &nodes[n1], &nodes[n2], base_fee, proportional_fee, delay);
		if(flag)
			get_connection(rstate, &nodes[n1], &nodes[n2])->channel_flags |= ROUTING_FLAGS_DISABLED;
	}
	scanf("%d", &n1); // source
	scanf("%d", &n2); // destination
	
	for(i = 0; i < number_of_nodes; i++) {
		strcpy(node_map[i], secp256k1_pubkey_to_hexstr(tmpctx, &nodes[i].pubkey));
	}

	route = find_route(tmpctx, rstate, &nodes[n1], &nodes[n2], msatoshi, riskfactor, fuzz, NULL, &fee);
	int path_count = tal_count(route);

	printf("Route taken:\n");
	int temp = n1;

	for(i = 0; i < path_count; i++) {
		if(temp == get_index(node_map, type_to_string(tmpctx, struct pubkey, &route[i]->nodes[0]->id), number_of_nodes))
		{
			printf("%d -> %d\n", get_index(node_map, type_to_string(tmpctx, struct pubkey, &route[i]->nodes[0]->id), number_of_nodes),
			   			get_index(node_map, type_to_string(tmpctx, struct pubkey, &route[i]->nodes[1]->id), number_of_nodes));
			temp = get_index(node_map, type_to_string(tmpctx, struct pubkey, &route[i]->nodes[1]->id), number_of_nodes);
		}
		else
		{
			printf("%d -> %d\n", get_index(node_map, type_to_string(tmpctx, struct pubkey, &route[i]->nodes[1]->id), number_of_nodes),
			   			get_index(node_map, type_to_string(tmpctx, struct pubkey, &route[i]->nodes[0]->id), number_of_nodes));
			temp = get_index(node_map, type_to_string(tmpctx, struct pubkey, &route[i]->nodes[0]->id), number_of_nodes);
		}
	}

	tal_free(tmpctx);
	secp256k1_context_destroy(secp256k1_ctx);
	return 0;
}

/* Links:

get_route()
https://github.com/ElementsProject/lightning/blob/d18d950a0ac3335842f7a994bb4035705776fd87/gossipd/routing.c#L1494

find_route()
https://github.com/ElementsProject/lightning/blob/1d7b287439d2efce6f3cb3eb51be8274a1971d89/gossipd/routing.c#L449

struct node definition
https://github.com/ElementsProject/lightning/blob/1d7b287439d2efce6f3cb3eb51be8274a1971d89/gossipd/routing.h#L94

struct routing_state definition
https://github.com/ElementsProject/lightning/blob/1d7b287439d2efce6f3cb3eb51be8274a1971d89/gossipd/routing.h#L174

struct chan definition
https://github.com/ElementsProject/lightning/blob/1d7b287439d2efce6f3cb3eb51be8274a1971d89/gossipd/routing.h#L48

*/
