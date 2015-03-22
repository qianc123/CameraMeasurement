
// CameraMeasurementDlg.h : header file
//
#include "HalconHeader.h"
#pragma once

// CCameraMeasurementDlg dialog
class CCameraMeasurementDlg : public CDialogEx
{
// Construction
public:
	CCameraMeasurementDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_CAMERAMEASUREMENT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCamCalibBtn();
	afx_msg void OnBnClickedImageWcsBtn();
	afx_msg void OnBnClickedOpenImgBtn();

public:
	HObject hv_image;
	HTuple  hv_WindowID, hv_OpSystem;

public:
	void OpenHalconWind();
	void DisplayImage(HObject image, bool resize);
};