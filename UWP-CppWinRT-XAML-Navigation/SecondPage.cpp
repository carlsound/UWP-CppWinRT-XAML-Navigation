#include "pch.h"
#include "SecondPage.h"
#if __has_include("SecondPage.g.cpp")
#include "SecondPage.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::UWP_CppWinRT_XAML_Navigation::implementation
{
    SecondPage::SecondPage()
    {
        InitializeComponent();
    }

    int32_t SecondPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void SecondPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void SecondPage::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        Button().Content(box_value(L"Clicked"));
    }
}
