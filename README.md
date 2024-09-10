![sm64coopdx Logo](textures/segment2/custom_coopdx_logo.rgba32.png)

sm64coopdx is an online multiplayer project for the Super Mario 64 PC port that synchronizes all entities and every level for multiple players. The project was started by the Coop Deluxe Team. The purpose is to actively maintain and improve, but also continue sm64ex-coop, created by djoslin0. More features, customization, and power to the Lua API allow modders and players to enjoy Super Mario 64 more than ever!

Feel free to report bugs or contribute to the project. 

## Initial Goal (Accomplished)
Create a mod for the PC port where multiple people can play together online.

Unlike previous multiplayer projects, this one synchronizes enemies and events. This allows players to interact with the same world at the same time.

Interestingly enough though, the goal of the project has slowly evolved over time from simply just making a Super Mario 64 multiplayer mod to constantly maintaining and improving the project (notably the Lua API.)

## Lua
sm64coopdx is moddable via Lua, similar to Roblox and Garry's Mod's Lua APIs. To get started, click [here](docs/lua/lua.md) to see the Lua documentation.

## Errors on run?
On Linux, did you get that dreaded "GLIBCXX_2.something.something" or something similar?
Please compile it from source. Instructions below.

Missing GLIBCXX_3? Ah, easy. Here's how to solve it:
<details>
  <summary>Command (only tested in Ubuntu 20.04)</summary>

 ```bash
sudo add-apt-repository ppa:ubuntu-toolchain-r/test -y
sudo apt update
sudo apt install gcc-11 libstdc++6 -y
```
</details>

## How to compile
The pre-built executables should work for anyone, but if for some reason you have issues with the pre-built executables in Linux, this is how to do it:
- Open a terminal
- Run the following commands:
```bash
git clone https://github.com/coop-deluxe/sm64coopdx.git
cd sm64coopdx-main
make -j 
```
- Having problems with compiling, because of an unrecognized std::filesystem error? Run this command, **AFTER** ensuring that "Linking executable" was shown:
<details>
 <summary>g++ compile command</summary>
  
 ```bash
g++  -L build/us_pc -o build/us_pc/sm64coopdx build/us_pc/src/engine/surface_collision.o build/us_pc/src/engine/math_util.o build/us_pc/src/engine/behavior_script.o build/us_pc/src/engine/level_script.o build/us_pc/src/engine/graph_node_manager.o build/us_pc/src/engine/geo_layout.o build/us_pc/src/engine/surface_load.o build/us_pc/src/engine/graph_node.o build/us_pc/src/game/spawn_object.o build/us_pc/src/game/first_person_cam.o build/us_pc/src/game/mario_actions_automatic.o build/us_pc/src/game/level_geo.o build/us_pc/src/game/object_list_processor.o build/us_pc/src/game/print.o build/us_pc/src/game/characters.o build/us_pc/src/game/player_palette.o build/us_pc/src/game/mario_actions_object.o build/us_pc/src/game/obj_behaviors.o build/us_pc/src/game/hud.o build/us_pc/src/game/profiler.o build/us_pc/src/game/interaction.o build/us_pc/src/game/platform_displacement.o build/us_pc/src/game/area.o build/us_pc/src/game/debug.o build/us_pc/src/game/spawn_sound.o build/us_pc/src/game/mario_actions_cutscene.o build/us_pc/src/game/scroll_targets.o build/us_pc/src/game/level_info.o build/us_pc/src/game/rumble_init.o build/us_pc/src/game/mario_step.o build/us_pc/src/game/screen_transition.o build/us_pc/src/game/hardcoded.o build/us_pc/src/game/save_file.o build/us_pc/src/game/paintings.o build/us_pc/src/game/behavior_actions.o build/us_pc/src/game/debug_course.o build/us_pc/src/game/camera.o build/us_pc/src/game/mario_actions_airborne.o build/us_pc/src/game/rng_position.o build/us_pc/src/game/object_helpers.o build/us_pc/src/game/mario_actions_moving.o build/us_pc/src/game/shadow.o build/us_pc/src/game/mario.o build/us_pc/src/game/envfx_snow.o build/us_pc/src/game/envfx_bubbles.o build/us_pc/src/game/mario_actions_submerged.o build/us_pc/src/game/sound_init.o build/us_pc/src/game/memory.o build/us_pc/src/game/obj_behaviors_2.o build/us_pc/src/game/game_init.o build/us_pc/src/game/macro_special_objects.o build/us_pc/src/game/macro_presets.o build/us_pc/src/game/moving_texture.o build/us_pc/src/game/geo_misc.o build/us_pc/src/game/mario_misc.o build/us_pc/src/game/skybox.o build/us_pc/src/game/mario_actions_stationary.o build/us_pc/src/game/rendering_graph_node.o build/us_pc/src/game/object_collision.o build/us_pc/src/game/ingame_menu.o build/us_pc/src/game/level_update.o build/us_pc/src/audio/heap.o build/us_pc/src/audio/seqplayer.o build/us_pc/src/audio/unk_shindou_audio_file.o build/us_pc/src/audio/shindou_debug_prints.o build/us_pc/src/audio/globals_start.o build/us_pc/src/audio/playback.o build/us_pc/src/audio/effects.o build/us_pc/src/audio/external.o build/us_pc/src/audio/load.o build/us_pc/src/audio/port_eu.o build/us_pc/src/audio/audio_session_presets_sh.o build/us_pc/src/audio/synthesis.o build/us_pc/src/audio/data.o build/us_pc/src/menu/intro_geo.o build/us_pc/src/menu/ingame_text.o build/us_pc/src/menu/level_select_menu.o build/us_pc/src/menu/star_select.o build/us_pc/src/menu/file_select.o build/us_pc/src/buffers/framebuffers.o build/us_pc/src/buffers/gfx_output_buffer.o build/us_pc/src/buffers/buffers.o build/us_pc/src/buffers/zbuffer.o build/us_pc/actors/group15.o build/us_pc/actors/group12_geo.o build/us_pc/actors/group9_geo.o build/us_pc/actors/group16.o build/us_pc/actors/group13_geo.o build/us_pc/actors/group4.o build/us_pc/actors/group10.o build/us_pc/actors/group7_geo.o build/us_pc/actors/group5.o build/us_pc/actors/group8.o build/us_pc/actors/group14_geo.o build/us_pc/actors/group6_geo.o build/us_pc/actors/group14.o build/us_pc/actors/common1.o build/us_pc/actors/group9.o build/us_pc/actors/zcustom0_geo.o build/us_pc/actors/group8_geo.o build/us_pc/actors/group1_geo.o build/us_pc/actors/common0_geo.o build/us_pc/actors/group3_geo.o build/us_pc/actors/group2.o build/us_pc/actors/group0_geo.o build/us_pc/actors/group6.o build/us_pc/actors/custom0_geo.o build/us_pc/actors/group4_geo.o build/us_pc/actors/group17_geo.o build/us_pc/actors/custom0.o build/us_pc/actors/group17.o build/us_pc/actors/group12.o build/us_pc/actors/group11_geo.o build/us_pc/actors/group7.o build/us_pc/actors/group16_geo.o build/us_pc/actors/group1.o build/us_pc/actors/group11.o build/us_pc/actors/group5_geo.o build/us_pc/actors/group3.o build/us_pc/actors/zcustom0.o build/us_pc/actors/common0.o build/us_pc/actors/group10_geo.o build/us_pc/actors/group0.o build/us_pc/actors/group13.o build/us_pc/actors/group15_geo.o build/us_pc/actors/common1_geo.o build/us_pc/actors/group2_geo.o build/us_pc/levels/entry.o build/us_pc/levels/scripts.o build/us_pc/bin/bitdw_skybox.o build/us_pc/bin/mountain.o build/us_pc/bin/custom_font.o build/us_pc/bin/machine.o build/us_pc/bin/custom_textures.o build/us_pc/bin/grass.o build/us_pc/bin/cave.o build/us_pc/bin/bitfs_skybox.o build/us_pc/bin/water.o build/us_pc/bin/bits_skybox.o build/us_pc/bin/title_screen_bg.o build/us_pc/bin/debug_level_select.o build/us_pc/bin/sky.o build/us_pc/bin/generic.o build/us_pc/bin/ccm_skybox.o build/us_pc/bin/spooky.o build/us_pc/bin/water_skybox.o build/us_pc/bin/fire.o build/us_pc/bin/outside.o build/us_pc/bin/effect.o build/us_pc/bin/snow.o build/us_pc/bin/bbh_skybox.o build/us_pc/bin/cloud_floor_skybox.o build/us_pc/bin/wdw_skybox.o build/us_pc/bin/ssl_skybox.o build/us_pc/bin/clouds_skybox.o build/us_pc/bin/inside.o build/us_pc/bin/segment2.o build/us_pc/data/behavior_table.o build/us_pc/data/behavior_data.o build/us_pc/sound/samples_assets.o build/us_pc/sound/sequences_assets.o build/us_pc/sound/sound_data.o build/us_pc/src/pc/debug_context.o build/us_pc/src/pc/platform.o build/us_pc/src/pc/mixer.o build/us_pc/src/pc/cliopts.o build/us_pc/src/pc/ini.o build/us_pc/src/pc/configfile.o build/us_pc/src/pc/loading.o build/us_pc/src/pc/nametags.o build/us_pc/src/pc/update_checker.o build/us_pc/src/pc/pc_main.o build/us_pc/src/pc/rom_assets.o build/us_pc/src/pc/ultra_reimplementation.o build/us_pc/src/pc/crash_handler.o build/us_pc/src/pc/chat_commands.o build/us_pc/src/pc/gfx/gfx_pc.o build/us_pc/src/pc/gfx/gfx_sdl2.o build/us_pc/src/pc/gfx/gfx_opengl_legacy.o build/us_pc/src/pc/gfx/gfx_cc.o build/us_pc/src/pc/gfx/gfx_sdl1.o build/us_pc/src/pc/gfx/gfx_dummy.o build/us_pc/src/pc/gfx/gfx_opengl.o build/us_pc/src/pc/audio/audio_sdl1.o build/us_pc/src/pc/audio/audio_sdl2.o build/us_pc/src/pc/audio/audio_null.o build/us_pc/src/pc/controller/controller_mouse.o build/us_pc/src/pc/controller/controller_sdl2.o build/us_pc/src/pc/controller/controller_entry_point.o build/us_pc/src/pc/controller/controller_keyboard.o build/us_pc/src/pc/controller/controller_bind_mapping.o build/us_pc/src/pc/controller/controller_sdl1.o build/us_pc/src/pc/fs/fmem.o build/us_pc/src/pc/fs/dirtree.o build/us_pc/src/pc/fs/fs_packtype_dir.o build/us_pc/src/pc/fs/fs.o build/us_pc/src/pc/mods/mods_utils.o build/us_pc/src/pc/mods/mods.o build/us_pc/src/pc/mods/mod.o build/us_pc/src/pc/mods/mod_import.o build/us_pc/src/pc/mods/mod_cache.o build/us_pc/src/pc/dev/chat.o build/us_pc/src/pc/network/moderator_list.o build/us_pc/src/pc/network/lag_compensation.o build/us_pc/src/pc/network/version.o build/us_pc/src/pc/network/network_utils.o build/us_pc/src/pc/network/network.o build/us_pc/src/pc/network/sync_object.o build/us_pc/src/pc/network/ban_list.o build/us_pc/src/pc/network/network_player.o build/us_pc/src/pc/network/packets/packet_reliable.o build/us_pc/src/pc/network/packets/packet_player_settings.o build/us_pc/src/pc/network/packets/packet_global_popup.o build/us_pc/src/pc/network/packets/packet_level_area_inform.o build/us_pc/src/pc/network/packets/packet_level.o build/us_pc/src/pc/network/packets/packet.o build/us_pc/src/pc/network/packets/packet_read_write.o build/us_pc/src/pc/network/packets/packet_ordered.o build/us_pc/src/pc/network/packets/packet_request_failed.o build/us_pc/src/pc/network/packets/packet_change_area.o build/us_pc/src/pc/network/packets/packet_leaving.o build/us_pc/src/pc/network/packets/packet_level_macro.o build/us_pc/src/pc/network/packets/packet_player.o build/us_pc/src/pc/network/packets/packet_area_request.o build/us_pc/src/pc/network/packets/packet_mod_list.o build/us_pc/src/pc/network/packets/packet_command_mod.o build/us_pc/src/pc/network/packets/packet_collect_star.o build/us_pc/src/pc/network/packets/packet_collect_coin.o build/us_pc/src/pc/network/packets/packet_collect_item.o build/us_pc/src/pc/network/packets/packet_spawn_star.o build/us_pc/src/pc/network/packets/packet_download.o build/us_pc/src/pc/network/packets/packet_save_file.o build/us_pc/src/pc/network/packets/packet_chat.o build/us_pc/src/pc/network/packets/packet_object.o build/us_pc/src/pc/network/packets/packet_area.o build/us_pc/src/pc/network/packets/packet_level_spawn_info.o build/us_pc/src/pc/network/packets/packet_death.o build/us_pc/src/pc/network/packets/packet_kick.o build/us_pc/src/pc/network/packets/packet_network_players.o build/us_pc/src/pc/network/packets/packet_spawn_objects.o build/us_pc/src/pc/network/packets/packet_change_water_level.o build/us_pc/src/pc/network/packets/packet_level_respawn_info.o build/us_pc/src/pc/network/packets/packet_save_remove_flag.o build/us_pc/src/pc/network/packets/packet_custom.o build/us_pc/src/pc/network/packets/packet_lua_sync_table.o build/us_pc/src/pc/network/packets/packet_debug_sync.o build/us_pc/src/pc/network/packets/packet_change_level.o build/us_pc/src/pc/network/packets/packet_sync_valid.o build/us_pc/src/pc/network/packets/packet_keep_alive.o build/us_pc/src/pc/network/packets/packet_ping.o build/us_pc/src/pc/network/packets/packet_save_set_flag.o build/us_pc/src/pc/network/packets/packet_level_request.o build/us_pc/src/pc/network/packets/packet_join.o build/us_pc/src/pc/network/packets/packet_lua_custom.o build/us_pc/src/pc/network/packets/packet_level_area_request.o build/us_pc/src/pc/network/socket/socket.o build/us_pc/src/pc/network/socket/socket_linux.o build/us_pc/src/pc/network/socket/socket_windows.o build/us_pc/src/pc/network/coopnet/coopnet_id.o build/us_pc/src/pc/network/coopnet/coopnet.o build/us_pc/src/pc/utils/string_linked_list.o build/us_pc/src/pc/utils/string_builder.o build/us_pc/src/pc/utils/stb_vorbis.o build/us_pc/src/pc/utils/misc.o build/us_pc/src/pc/utils/md5.o build/us_pc/src/pc/utils/miniz/miniz.o build/us_pc/src/pc/djui/djui_panel_pause.o build/us_pc/src/pc/djui/djui_panel_player.o build/us_pc/src/pc/djui/djui_console.o build/us_pc/src/pc/djui/djui_panel_controls_n64.o build/us_pc/src/pc/djui/djui_button.o build/us_pc/src/pc/djui/djui_hud_utils.o build/us_pc/src/pc/djui/djui_panel_misc.o build/us_pc/src/pc/djui/djui_panel_options.o build/us_pc/src/pc/djui/djui_panel_join_private.o build/us_pc/src/pc/djui/djui_panel_main.o build/us_pc/src/pc/djui/djui_panel_camera.o build/us_pc/src/pc/djui/djui_lobby_entry.o build/us_pc/src/pc/djui/djui_slider.o build/us_pc/src/pc/djui/djui_checkbox.o build/us_pc/src/pc/djui/djui_bind.o build/us_pc/src/pc/djui/djui_panel_host_settings.o build/us_pc/src/pc/djui/djui_selectionbox.o build/us_pc/src/pc/djui/djui_panel_join_lobbies.o build/us_pc/src/pc/djui/djui_panel_sound.o build/us_pc/src/pc/djui/djui_panel_join.o build/us_pc/src/pc/djui/djui_base.o build/us_pc/src/pc/djui/djui_panel_host.o build/us_pc/src/pc/djui/djui_panel_join_message.o build/us_pc/src/pc/djui/djui_font.o build/us_pc/src/pc/djui/djui_unicode.o build/us_pc/src/pc/djui/djui_theme.o build/us_pc/src/pc/djui/djui_inputbox.o build/us_pc/src/pc/djui/djui_panel_host_mods.o build/us_pc/src/pc/djui/djui_panel_display.o build/us_pc/src/pc/djui/djui_chat_message.o build/us_pc/src/pc/djui/djui_paginated.o build/us_pc/src/pc/djui/djui_cursor.o build/us_pc/src/pc/djui/djui_three_panel.o build/us_pc/src/pc/djui/djui_root.o build/us_pc/src/pc/djui/djui_panel_modlist.o build/us_pc/src/pc/djui/djui_interactable.o build/us_pc/src/pc/djui/djui_panel_rules.o build/us_pc/src/pc/djui/djui_panel_playerlist.o build/us_pc/src/pc/djui/djui_panel_confirm.o build/us_pc/src/pc/djui/djui_panel_menu.o build/us_pc/src/pc/djui/djui_panel_info.o build/us_pc/src/pc/djui/djui_rect.o build/us_pc/src/pc/djui/djui_chat_box.o build/us_pc/src/pc/djui/djui_panel_mod_menu.o build/us_pc/src/pc/djui/djui_panel_host_message.o build/us_pc/src/pc/djui/djui_flow_layout.o build/us_pc/src/pc/djui/djui_panel_host_save.o build/us_pc/src/pc/djui/djui_popup.o build/us_pc/src/pc/djui/djui_gfx.o build/us_pc/src/pc/djui/djui_panel_menu_options.o build/us_pc/src/pc/djui/djui_image.o build/us_pc/src/pc/djui/djui_panel.o build/us_pc/src/pc/djui/djui_panel_dynos.o build/us_pc/src/pc/djui/djui_panel_join_direct.o build/us_pc/src/pc/djui/djui_fps_display.o build/us_pc/src/pc/djui/djui_panel_controls_extra.o build/us_pc/src/pc/djui/djui_panel_language.o build/us_pc/src/pc/djui/djui_panel_controls.o build/us_pc/src/pc/djui/djui_panel_debug.o build/us_pc/src/pc/djui/djui_language.o build/us_pc/src/pc/djui/djui.o build/us_pc/src/pc/djui/djui_progress_bar.o build/us_pc/src/pc/djui/djui_text.o build/us_pc/src/pc/lua/smlua_functions.o build/us_pc/src/pc/lua/smlua_functions_autogen.o build/us_pc/src/pc/lua/smlua_utils.o build/us_pc/src/pc/lua/smlua_constants_autogen.o build/us_pc/src/pc/lua/smlua_cobject_allowlist.o build/us_pc/src/pc/lua/smlua.o build/us_pc/src/pc/lua/smlua_cobject_autogen.o build/us_pc/src/pc/lua/smlua_hooks.o build/us_pc/src/pc/lua/smlua_cobject.o build/us_pc/src/pc/lua/smlua_sync_table.o build/us_pc/src/pc/lua/utils/smlua_audio_utils.o build/us_pc/src/pc/lua/utils/smlua_gfx_utils.o build/us_pc/src/pc/lua/utils/smlua_deprecated.o build/us_pc/src/pc/lua/utils/smlua_level_utils.o build/us_pc/src/pc/lua/utils/smlua_text_utils.o build/us_pc/src/pc/lua/utils/smlua_math_utils.o build/us_pc/src/pc/lua/utils/smlua_misc_utils.o build/us_pc/src/pc/lua/utils/smlua_camera_utils.o build/us_pc/src/pc/lua/utils/smlua_model_utils.o build/us_pc/src/pc/lua/utils/smlua_collision_utils.o build/us_pc/src/pc/lua/utils/smlua_anim_utils.o build/us_pc/src/pc/lua/utils/smlua_obj_utils.o build/us_pc/src/pc/discord/discord_activity.o build/us_pc/src/pc/discord/discord.o build/us_pc/src/pc/mumble/mumble.o build/us_pc/levels/bbh/leveldata.o build/us_pc/levels/castle_grounds/leveldata.o build/us_pc/levels/lll/leveldata.o build/us_pc/levels/thi/leveldata.o build/us_pc/levels/wdw/leveldata.o build/us_pc/levels/ddd/leveldata.o build/us_pc/levels/castle_inside/leveldata.o build/us_pc/levels/bowser_2/leveldata.o build/us_pc/levels/bowser_3/leveldata.o build/us_pc/levels/ending/leveldata.o build/us_pc/levels/menu/leveldata.o build/us_pc/levels/jrb/leveldata.o build/us_pc/levels/vcutm/leveldata.o build/us_pc/levels/hmc/leveldata.o build/us_pc/levels/bitdw/leveldata.o build/us_pc/levels/castle_courtyard/leveldata.o build/us_pc/levels/ttc/leveldata.o build/us_pc/levels/cotmc/leveldata.o build/us_pc/levels/rr/leveldata.o build/us_pc/levels/bitfs/leveldata.o build/us_pc/levels/wmotr/leveldata.o build/us_pc/levels/ttm/leveldata.o build/us_pc/levels/wf/leveldata.o build/us_pc/levels/bits/leveldata.o build/us_pc/levels/pss/leveldata.o build/us_pc/levels/intro/leveldata.o build/us_pc/levels/bob/leveldata.o build/us_pc/levels/bowser_1/leveldata.o build/us_pc/levels/sa/leveldata.o build/us_pc/levels/totwc/leveldata.o build/us_pc/levels/sl/leveldata.o build/us_pc/levels/ccm/leveldata.o build/us_pc/levels/ssl/leveldata.o build/us_pc/levels/bbh/script.o build/us_pc/levels/castle_grounds/script.o build/us_pc/levels/lll/script.o build/us_pc/levels/thi/script.o build/us_pc/levels/wdw/script.o build/us_pc/levels/ddd/script.o build/us_pc/levels/castle_inside/script.o build/us_pc/levels/bowser_2/script.o build/us_pc/levels/bowser_3/script.o build/us_pc/levels/ending/script.o build/us_pc/levels/menu/script.o build/us_pc/levels/jrb/script.o build/us_pc/levels/vcutm/script.o build/us_pc/levels/hmc/script.o build/us_pc/levels/bitdw/script.o build/us_pc/levels/castle_courtyard/script.o build/us_pc/levels/ttc/script.o build/us_pc/levels/cotmc/script.o build/us_pc/levels/rr/script.o build/us_pc/levels/bitfs/script.o build/us_pc/levels/wmotr/script.o build/us_pc/levels/ttm/script.o build/us_pc/levels/wf/script.o build/us_pc/levels/bits/script.o build/us_pc/levels/pss/script.o build/us_pc/levels/intro/script.o build/us_pc/levels/bob/script.o build/us_pc/levels/bowser_1/script.o build/us_pc/levels/sa/script.o build/us_pc/levels/totwc/script.o build/us_pc/levels/sl/script.o build/us_pc/levels/ccm/script.o build/us_pc/levels/ssl/script.o build/us_pc/levels/bbh/geo.o build/us_pc/levels/castle_grounds/geo.o build/us_pc/levels/lll/geo.o build/us_pc/levels/thi/geo.o build/us_pc/levels/wdw/geo.o build/us_pc/levels/ddd/geo.o build/us_pc/levels/castle_inside/geo.o build/us_pc/levels/bowser_2/geo.o build/us_pc/levels/bowser_3/geo.o build/us_pc/levels/ending/geo.o build/us_pc/levels/menu/geo.o build/us_pc/levels/jrb/geo.o build/us_pc/levels/vcutm/geo.o build/us_pc/levels/hmc/geo.o build/us_pc/levels/bitdw/geo.o build/us_pc/levels/castle_courtyard/geo.o build/us_pc/levels/ttc/geo.o build/us_pc/levels/cotmc/geo.o build/us_pc/levels/rr/geo.o build/us_pc/levels/bitfs/geo.o build/us_pc/levels/wmotr/geo.o build/us_pc/levels/ttm/geo.o build/us_pc/levels/wf/geo.o build/us_pc/levels/bits/geo.o build/us_pc/levels/pss/geo.o build/us_pc/levels/intro/geo.o build/us_pc/levels/bob/geo.o build/us_pc/levels/bowser_1/geo.o build/us_pc/levels/sa/geo.o build/us_pc/levels/totwc/geo.o build/us_pc/levels/sl/geo.o build/us_pc/levels/ccm/geo.o build/us_pc/levels/ssl/geo.o build/us_pc/data/dynos_bin_legacy.o build/us_pc/data/dynos_gfx_init.o build/us_pc/data/dynos_bin_pointer.o build/us_pc/data/dynos_mgr_actor.o build/us_pc/data/dynos_main.o build/us_pc/data/dynos_mgr_bhv.o build/us_pc/data/dynos_bin_macro_object.o build/us_pc/data/dynos_bin_texlist.o build/us_pc/data/dynos_bin_gfx.o build/us_pc/data/dynos_warps.o build/us_pc/data/dynos_c.o build/us_pc/data/dynos_mgr_movtexqc.o build/us_pc/data/dynos_cmap.o build/us_pc/data/dynos_bin_actor.o build/us_pc/data/dynos_bin_vtx.o build/us_pc/data/dynos_bin_animation.o build/us_pc/data/dynos_bin_lights.o build/us_pc/data/dynos_bin_compress.o build/us_pc/data/dynos_bin_movtex.o build/us_pc/data/dynos_mgr_lvl.o build/us_pc/data/dynos_mgr_builtin.o build/us_pc/data/dynos_mgr_col.o build/us_pc/data/dynos_bin_read.o build/us_pc/data/dynos_bin_lvl_validate.o build/us_pc/data/dynos_bin_col.o build/us_pc/data/dynos_mgr_tex.o build/us_pc/data/dynos_mgr_builtin_tex.o build/us_pc/data/dynos_bin_utils.o build/us_pc/data/dynos_bin_behavior.o build/us_pc/data/dynos_level.o build/us_pc/data/dynos_bin_lvl.o build/us_pc/data/dynos_bin_tex.o build/us_pc/data/dynos_bin_trajectory.o build/us_pc/data/dynos_bin_light0.o build/us_pc/data/dynos_misc.o build/us_pc/data/dynos_bin_light_t.o build/us_pc/data/dynos_bin_movtexqc.o build/us_pc/data/dynos_mgr_pack.o build/us_pc/data/dynos_bin_rooms.o build/us_pc/data/dynos_bin_common.o build/us_pc/data/dynos_bin_ambient_t.o build/us_pc/data/dynos_bin_geo.o build/us_pc/data/dynos_mgr_models.o build/us_pc/data/dynos_mgr_anim.o build/us_pc/src/pc/rom_checker.o build/us_pc/src/pc/gfx/gfx_direct3d_common.o build/us_pc/src/pc/gfx/gfx_dxgi.o build/us_pc/src/pc/gfx/gfx_direct3d11.o build/us_pc/src/pc/mods/mod_storage.o  build/us_pc/assets/mario_anim_data.o build/us_pc/assets/demo_data.o  build/us_pc/lib/src/alBnkfNew.o build/us_pc/lib/src/guLookAtRef.o build/us_pc/lib/src/guMtxF2L.o build/us_pc/lib/src/guNormalize.o build/us_pc/lib/src/guOrthoF.o build/us_pc/lib/src/guPerspectiveF.o build/us_pc/lib/src/guRotateF.o build/us_pc/lib/src/guScaleF.o build/us_pc/lib/src/guTranslateF.o build/us_pc/lib/src/ldiv.o build/us_pc/src/goddard/old_menu.o build/us_pc/src/goddard/particles.o build/us_pc/src/goddard/dynlist_proc.o build/us_pc/src/goddard/renderer.o build/us_pc/src/goddard/skin.o build/us_pc/src/goddard/objects.o build/us_pc/src/goddard/draw_objects.o build/us_pc/src/goddard/debug_utils.o build/us_pc/src/goddard/joints.o build/us_pc/src/goddard/gd_math.o build/us_pc/src/goddard/gd_memory.o build/us_pc/src/goddard/gd_main.o build/us_pc/src/goddard/skin_movement.o build/us_pc/src/goddard/sfx.o build/us_pc/src/goddard/shape_helper.o build/us_pc/src/goddard/dynlists/dynlist_test_cube.o build/us_pc/src/goddard/dynlists/dynlists_mario_eyes.o build/us_pc/src/goddard/dynlists/anim_mario_lips_1.o build/us_pc/src/goddard/dynlists/dynlist_mario_master.o build/us_pc/src/goddard/dynlists/dynlist_unused.o build/us_pc/src/goddard/dynlists/anim_group_2.o build/us_pc/src/goddard/dynlists/anim_mario_mustache_left.o build/us_pc/src/goddard/dynlists/dynlist_mario_face.o build/us_pc/src/goddard/dynlists/anim_mario_lips_2.o build/us_pc/src/goddard/dynlists/anim_mario_mustache_right.o build/us_pc/src/goddard/dynlists/anim_mario_eyebrows_1.o build/us_pc/src/goddard/dynlists/dynlists_mario_eyebrows_mustache.o build/us_pc/src/goddard/dynlists/anim_group_1.o  -march=native -lm -lGL `sdl2-config --libs` -no-pie -lpthread -rdynamic -ldl -pthread -lz -lcurl -Llib/lua/linux -l:liblua53.a -ldl -Llib/coopnet/linux -l:libcoopnet.a -l:libjuice.a -ldiscord_game_sdk -Wl,-rpath . -Wl,-rpath lib/discordsdk -latomic -lrt -lstdc++fs
```
</details>
<details>
  <summary>Still can't compile the game?</summary>
  If you're on Windows, now's a good time to open an issue here.
  On Linux? Run this:

```bash
sudo apt update; sudo apt install binutils-mips-linux-gnu bsdmainutils build-essential libcapstone-dev pkgconf python3 libz-dev libcurl4-openssl-dev
```

Now try compiling yet again.
</details>



