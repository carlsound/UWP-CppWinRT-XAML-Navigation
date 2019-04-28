#include "pch.h"
#include "ThirdPage.h"
#if __has_include("ThirdPage.g.cpp")
#include "ThirdPage.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::UWP_CppWinRT_XAML_Navigation::implementation
{
    ThirdPage::ThirdPage()
    {
        InitializeComponent();
    }

    int32_t ThirdPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void ThirdPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void ThirdPage::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        Button().Content(box_value(L"Clicked"));
    }
}
