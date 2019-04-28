#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::UWP_CppWinRT_XAML_Navigation::implementation
{
    MainPage::MainPage()
    {
        InitializeComponent();
    }

    int32_t MainPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void MainPage::ClickHandler(IInspectable const& sender, RoutedEventArgs const&)
    {
		sender.as<winrt::Windows::UI::Xaml::Controls::Button>().Content(box_value(L"Clicked"));
        //myButton().Content(box_value(L"Clicked"));
    }
}


void winrt::UWP_CppWinRT_XAML_Navigation::implementation::MainPage::NavViewSelectionChanged(winrt::Windows::UI::Xaml::Controls::NavigationView const& sender, winrt::Windows::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs const& args)
{
	winrt::hstring const itemName = args.as<winrt::Windows::UI::Xaml::Controls::NavigationViewItem>().Name();

	winrt::hstring const scndPage = winrt::hstring(L"Second Page");
	winrt::hstring const thrdPage = winrt::hstring(L"Third Page");

	
	if (winrt::operator ==(itemName,scndPage))
	{
		Frame().Navigate(winrt::xaml_typename<UWP_CppWinRT_XAML_Navigation::SecondPage>());
	}
	else if (winrt::operator ==(itemName, thrdPage))
	{
		Frame().Navigate(winrt::xaml_typename<UWP_CppWinRT_XAML_Navigation::ThirdPage>());
	}
}
