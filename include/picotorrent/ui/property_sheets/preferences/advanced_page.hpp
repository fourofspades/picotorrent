#pragma once

#include <picotorrent/ui/property_sheets/property_sheet_page.hpp>
#include <string>

namespace picotorrent
{
namespace ui
{
namespace property_sheets
{
namespace preferences
{
    class advanced_page : public property_sheet_page
    {
    public:
        advanced_page();

        bool use_picotorrent_id();
        void set_use_picotorrent_id(bool value);

    protected:
        BOOL on_command(HWND hDlg, UINT uCtrlId, WPARAM wParam, LPARAM lParam);
    };
}
}
}
}