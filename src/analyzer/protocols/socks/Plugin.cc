
#include "plugin/Plugin.h"

#include "SOCKS.h"

BRO_PLUGIN_BEGIN(SOCKS)
	BRO_PLUGIN_DESCRIPTION("SOCKS Analyzer");
	BRO_PLUGIN_ANALYZER("SOCKS", socks::SOCKS_Analyzer);
	BRO_PLUGIN_BIF_FILE(events);
BRO_PLUGIN_END
