/*
 SPDX-License-Identifier: GPL-2.0-or-later
 myMPD (c) 2018-2019 Juergen Mang <mail@jcgames.de>
 https://github.com/jcorporation/mympd
*/

#ifndef __MPD_CLIENT_PLAYLISTS_H__
#define __MPD_CLIENT_PLAYLISTS_H__
sds mpd_client_put_playlists(t_config *config, t_mpd_state *mpd_state, sds buffer, sds method, int request_id,
                             const unsigned int offset, const char *filter);
sds mpd_client_put_playlist_list(t_config *config, t_mpd_state *mpd_state, sds buffer, sds method, int request_id,
                                 const char *uri, const unsigned int offset, const char *filter, const t_tags *tagcols);
sds mpd_client_playlist_delete(t_config *config, t_mpd_state *mpd_state, sds buffer, sds method, int request_id,
                               const char *playlist);
sds mpd_client_playlist_rename(t_config *config, t_mpd_state *mpd_state, sds buffer, sds method, int request_id,
                                const char *old_playlist, const char *new_playlist);
sds mpd_client_smartpls_put(t_config *config, sds buffer, sds method, int request_id,
                            const char *playlist);
bool mpd_client_smartpls_save(t_config *config, t_mpd_state *mpd_state, const char *smartpltype, 
                              const char *playlist, const char *tag, const char *searchstr, const int maxentries, 
                              const int timerange);

bool mpd_client_smartpls_update_all(t_config *config, t_mpd_state *mpd_state);
bool mpd_client_smartpls_update(t_config *config, t_mpd_state *mpd_state, const char *playlist);
bool mpd_client_smartpls_clear(t_mpd_state *mpd_state, const char *playlist);
bool mpd_client_smartpls_update_search(t_mpd_state *mpd_state, const char *playlist, const char *tag, const char *searchstr);
bool mpd_client_smartpls_update_sticker(t_mpd_state *mpd_state, const char *playlist, const char *sticker, const int maxentries);
bool mpd_client_smartpls_update_newest(t_mpd_state *mpd_state, const char *playlist, const int timerange);
#endif
