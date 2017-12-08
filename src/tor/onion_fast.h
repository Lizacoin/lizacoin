#ifndef TOR_ONION_FAST_H
#define TOR_ONION_FAST_H

#define CREATE_FAST_LEN DIGEST_LEN
#define CREATED_FAST_LEN (DIGEST_LEN*2)

typedef struct fast_handshake_state_t {
  uint8_t state[DIGEST_LEN];
} fast_handshake_state_t;

void fast_handshake_state_free(fast_handshake_state_t *victim);

int fast_onionskin_create(fast_handshake_state_t **handshake_state_out,
                          uint8_t *handshake_out);

int fast_server_handshake(const uint8_t *message_in,
                          uint8_t *handshake_reply_out,
                          uint8_t *key_out,
                          size_t key_out_len);

int fast_client_handshake(const fast_handshake_state_t *handshake_state,
                          const uint8_t *handshake_reply_out,
                          uint8_t *key_out,
                          size_t key_out_len);

#endif
