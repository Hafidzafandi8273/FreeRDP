/**
 * FreeRDP: A Remote Desktop Protocol Implementation
 * .rdp file
 *
 * Copyright 2012 Marc-Andre Moreau <marcandre.moreau@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FREERDP_CLIENT_RDP_FILE_H
#define FREERDP_CLIENT_RDP_FILE_H

#include <freerdp/api.h>
#include <freerdp/freerdp.h>

typedef struct rdp_file rdpFile;

#ifdef __cplusplus
extern "C" {
#endif

FREERDP_API BOOL freerdp_client_parse_rdp_file(rdpFile* file, const char* name);
FREERDP_API BOOL freerdp_client_parse_rdp_file_buffer(rdpFile* file, const BYTE* buffer, size_t size);
FREERDP_API BOOL freerdp_client_populate_settings_from_rdp_file(rdpFile* file, rdpSettings* settings);

FREERDP_API BOOL freerdp_client_populate_rdp_file_from_settings(rdpFile* file, const rdpSettings* settings);
FREERDP_API BOOL freerdp_client_write_rdp_file(const rdpFile* file, const char* name, BOOL unicode);
FREERDP_API size_t freerdp_client_write_rdp_file_buffer(const rdpFile* file, char* buffer, size_t size);

FREERDP_API int freerdp_client_rdp_file_set_string_option(rdpFile* file, const char* name, const char* value);
FREERDP_API const char* freerdp_client_rdp_file_get_string_option(rdpFile* file, const char* name);

FREERDP_API int freerdp_client_rdp_file_set_integer_option(rdpFile* file, const char* name, int value);
FREERDP_API int freerdp_client_rdp_file_get_integer_option(rdpFile* file, const char* name);

FREERDP_API rdpFile* freerdp_client_rdp_file_new(void);
FREERDP_API void freerdp_client_rdp_file_free(rdpFile* file);

#ifdef __cplusplus
}
#endif

#endif /* FREERDP_CLIENT_RDP_FILE_H */
