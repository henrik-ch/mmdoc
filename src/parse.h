/* SPDX-License-Identifier: CC0-1.0 */
#pragma once

int parse_heading_bracketed_span_id(const char *text, char *id);
int parse_link_bracketed_span_id(const char *text, char *span_text, char *id);
int parse_admonition_start(const char *text, char *admonition_type, char *admonition_anchor);
int parse_admonition_end(const char *text);
int parse_dd(const char *text);
