/********************************************************************************
** Form generated from reading UI file 'hpg_dhunter.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HPG_DHUNTER_H
#define UI_HPG_DHUNTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HPG_Dhunter
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_5;
    QComboBox *genome_reference;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QPushButton *case_file;
    QPushButton *delete_case;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *up_case;
    QPushButton *down_case;
    QSpacerItem *verticalSpacer;
    QPlainTextEdit *case_files;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QPushButton *control_file;
    QPushButton *delete_control;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *up_control;
    QPushButton *down_control;
    QSpacerItem *verticalSpacer_2;
    QPlainTextEdit *control_files;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *out_path;
    QLineEdit *out_path_label;
    QFrame *line;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_3;
    QCheckBox *grouped_samples;
    QCheckBox *single_samples;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *mC;
    QCheckBox *hmC;
    QCheckBox *forward;
    QCheckBox *reverse;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *all_chroms;
    QRadioButton *selected_chrms;
    QLineEdit *chromosomes_list;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_9;
    QSlider *mC_cobertura;
    QLineEdit *mC_min_cov;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label;
    QSlider *hmC_cobertura;
    QLineEdit *hmC_min_cov;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_2;
    QSlider *min_covSamples_x_region;
    QLabel *label_10;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_6;
    QSlider *min_CpG_x_region;
    QLabel *label_11;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_4;
    QSlider *threshold;
    QLabel *threshold_label;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_7;
    QSlider *dmr_dwt_level;
    QLabel *label_8;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_8;
    QProgressBar *progressBar;
    QPushButton *start;
    QPushButton *stop;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HPG_Dhunter)
    {
        if (HPG_Dhunter->objectName().isEmpty())
            HPG_Dhunter->setObjectName(QStringLiteral("HPG_Dhunter"));
        HPG_Dhunter->setWindowModality(Qt::ApplicationModal);
        HPG_Dhunter->resize(550, 720);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HPG_Dhunter->sizePolicy().hasHeightForWidth());
        HPG_Dhunter->setSizePolicy(sizePolicy);
        HPG_Dhunter->setMinimumSize(QSize(550, 720));
        HPG_Dhunter->setLayoutDirection(Qt::LeftToRight);
        centralWidget = new QWidget(HPG_Dhunter);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_6 = new QVBoxLayout(centralWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_14->addWidget(label_5);

        genome_reference = new QComboBox(centralWidget);
        genome_reference->setObjectName(QStringLiteral("genome_reference"));
        genome_reference->setMinimumSize(QSize(200, 0));

        horizontalLayout_14->addWidget(genome_reference);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_14);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        case_file = new QPushButton(centralWidget);
        case_file->setObjectName(QStringLiteral("case_file"));
        case_file->setMaximumSize(QSize(120, 16777215));

        verticalLayout_3->addWidget(case_file);

        delete_case = new QPushButton(centralWidget);
        delete_case->setObjectName(QStringLiteral("delete_case"));
        delete_case->setMaximumSize(QSize(120, 16777215));

        verticalLayout_3->addWidget(delete_case);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        up_case = new QPushButton(centralWidget);
        up_case->setObjectName(QStringLiteral("up_case"));
        up_case->setMaximumSize(QSize(55, 16777215));

        horizontalLayout_7->addWidget(up_case);

        down_case = new QPushButton(centralWidget);
        down_case->setObjectName(QStringLiteral("down_case"));
        down_case->setMaximumSize(QSize(55, 16777215));

        horizontalLayout_7->addWidget(down_case);


        verticalLayout_3->addLayout(horizontalLayout_7);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout_4->addLayout(verticalLayout_3);

        case_files = new QPlainTextEdit(centralWidget);
        case_files->setObjectName(QStringLiteral("case_files"));
        case_files->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(8);
        case_files->setFont(font);
        case_files->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        case_files->setReadOnly(true);

        horizontalLayout_4->addWidget(case_files);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        control_file = new QPushButton(centralWidget);
        control_file->setObjectName(QStringLiteral("control_file"));
        control_file->setMaximumSize(QSize(120, 16777215));

        verticalLayout_5->addWidget(control_file);

        delete_control = new QPushButton(centralWidget);
        delete_control->setObjectName(QStringLiteral("delete_control"));
        delete_control->setMaximumSize(QSize(120, 16777215));

        verticalLayout_5->addWidget(delete_control);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        up_control = new QPushButton(centralWidget);
        up_control->setObjectName(QStringLiteral("up_control"));
        up_control->setMaximumSize(QSize(55, 16777215));

        horizontalLayout_2->addWidget(up_control);

        down_control = new QPushButton(centralWidget);
        down_control->setObjectName(QStringLiteral("down_control"));
        down_control->setMaximumSize(QSize(55, 16777215));

        horizontalLayout_2->addWidget(down_control);


        verticalLayout_5->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_5);

        control_files = new QPlainTextEdit(centralWidget);
        control_files->setObjectName(QStringLiteral("control_files"));
        control_files->setMinimumSize(QSize(0, 0));
        control_files->setMaximumSize(QSize(16777215, 16777215));
        control_files->setFont(font);
        control_files->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        control_files->setReadOnly(true);

        horizontalLayout->addWidget(control_files);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        out_path = new QPushButton(centralWidget);
        out_path->setObjectName(QStringLiteral("out_path"));
        out_path->setMinimumSize(QSize(120, 0));
        out_path->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_5->addWidget(out_path);

        out_path_label = new QLineEdit(centralWidget);
        out_path_label->setObjectName(QStringLiteral("out_path_label"));
        out_path_label->setReadOnly(true);

        horizontalLayout_5->addWidget(out_path_label);


        verticalLayout_2->addLayout(horizontalLayout_5);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_10->addWidget(label_3);

        grouped_samples = new QCheckBox(centralWidget);
        grouped_samples->setObjectName(QStringLiteral("grouped_samples"));

        horizontalLayout_10->addWidget(grouped_samples);

        single_samples = new QCheckBox(centralWidget);
        single_samples->setObjectName(QStringLiteral("single_samples"));
        single_samples->setChecked(true);

        horizontalLayout_10->addWidget(single_samples);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        mC = new QCheckBox(centralWidget);
        mC->setObjectName(QStringLiteral("mC"));
        mC->setChecked(true);
        mC->setAutoExclusive(false);

        horizontalLayout_3->addWidget(mC);

        hmC = new QCheckBox(centralWidget);
        hmC->setObjectName(QStringLiteral("hmC"));

        horizontalLayout_3->addWidget(hmC);

        forward = new QCheckBox(centralWidget);
        forward->setObjectName(QStringLiteral("forward"));
        forward->setChecked(true);

        horizontalLayout_3->addWidget(forward);

        reverse = new QCheckBox(centralWidget);
        reverse->setObjectName(QStringLiteral("reverse"));
        reverse->setChecked(true);

        horizontalLayout_3->addWidget(reverse);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        all_chroms = new QRadioButton(centralWidget);
        all_chroms->setObjectName(QStringLiteral("all_chroms"));
        all_chroms->setMinimumSize(QSize(100, 0));
        all_chroms->setMaximumSize(QSize(150, 16777215));
        all_chroms->setChecked(true);

        horizontalLayout_6->addWidget(all_chroms);

        selected_chrms = new QRadioButton(centralWidget);
        selected_chrms->setObjectName(QStringLiteral("selected_chrms"));
        selected_chrms->setMinimumSize(QSize(130, 0));
        selected_chrms->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_6->addWidget(selected_chrms);

        chromosomes_list = new QLineEdit(centralWidget);
        chromosomes_list->setObjectName(QStringLiteral("chromosomes_list"));
        chromosomes_list->setEnabled(false);
        chromosomes_list->setReadOnly(false);

        horizontalLayout_6->addWidget(chromosomes_list);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(124, 0));
        QFont font1;
        font1.setPointSize(10);
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_11->addWidget(label_9);

        mC_cobertura = new QSlider(centralWidget);
        mC_cobertura->setObjectName(QStringLiteral("mC_cobertura"));
        mC_cobertura->setFont(font1);
        mC_cobertura->setMinimum(1);
        mC_cobertura->setMaximum(500);
        mC_cobertura->setValue(100);
        mC_cobertura->setOrientation(Qt::Horizontal);

        horizontalLayout_11->addWidget(mC_cobertura);

        mC_min_cov = new QLineEdit(centralWidget);
        mC_min_cov->setObjectName(QStringLiteral("mC_min_cov"));
        mC_min_cov->setMinimumSize(QSize(50, 0));
        mC_min_cov->setMaximumSize(QSize(50, 16777215));
        QFont font2;
        font2.setPointSize(11);
        mC_min_cov->setFont(font2);
        mC_min_cov->setCursorPosition(3);
        mC_min_cov->setAlignment(Qt::AlignCenter);
        mC_min_cov->setCursorMoveStyle(Qt::LogicalMoveStyle);

        horizontalLayout_11->addWidget(mC_min_cov);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(124, 0));
        label->setFont(font1);

        horizontalLayout_9->addWidget(label);

        hmC_cobertura = new QSlider(centralWidget);
        hmC_cobertura->setObjectName(QStringLiteral("hmC_cobertura"));
        hmC_cobertura->setEnabled(false);
        hmC_cobertura->setFont(font1);
        hmC_cobertura->setMinimum(1);
        hmC_cobertura->setMaximum(500);
        hmC_cobertura->setValue(100);
        hmC_cobertura->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(hmC_cobertura);

        hmC_min_cov = new QLineEdit(centralWidget);
        hmC_min_cov->setObjectName(QStringLiteral("hmC_min_cov"));
        hmC_min_cov->setMinimumSize(QSize(50, 0));
        hmC_min_cov->setMaximumSize(QSize(50, 16777215));
        hmC_min_cov->setFont(font2);
        hmC_min_cov->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(hmC_min_cov);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        horizontalLayout_16->addWidget(label_2);

        min_covSamples_x_region = new QSlider(centralWidget);
        min_covSamples_x_region->setObjectName(QStringLiteral("min_covSamples_x_region"));
        min_covSamples_x_region->setMinimumSize(QSize(0, 0));
        min_covSamples_x_region->setFont(font1);
        min_covSamples_x_region->setMinimum(30);
        min_covSamples_x_region->setMaximum(100);
        min_covSamples_x_region->setValue(50);
        min_covSamples_x_region->setOrientation(Qt::Horizontal);

        horizontalLayout_16->addWidget(min_covSamples_x_region);

        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(30, 0));
        label_10->setFont(font2);
        label_10->setLayoutDirection(Qt::LeftToRight);
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_16->addWidget(label_10);

        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(15, 0));
        label_13->setFont(font1);

        horizontalLayout_16->addWidget(label_13);


        verticalLayout_2->addLayout(horizontalLayout_16);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(124, 0));
        label_6->setFont(font1);

        horizontalLayout_15->addWidget(label_6);

        min_CpG_x_region = new QSlider(centralWidget);
        min_CpG_x_region->setObjectName(QStringLiteral("min_CpG_x_region"));
        min_CpG_x_region->setMinimumSize(QSize(0, 0));
        min_CpG_x_region->setFont(font1);
        min_CpG_x_region->setMinimum(1);
        min_CpG_x_region->setMaximum(50);
        min_CpG_x_region->setPageStep(5);
        min_CpG_x_region->setValue(7);
        min_CpG_x_region->setSliderPosition(7);
        min_CpG_x_region->setOrientation(Qt::Horizontal);

        horizontalLayout_15->addWidget(min_CpG_x_region);

        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(30, 0));
        label_11->setFont(font2);
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_15->addWidget(label_11);

        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(15, 0));
        label_12->setFont(font1);

        horizontalLayout_15->addWidget(label_12);


        verticalLayout_2->addLayout(horizontalLayout_15);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(124, 0));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_12->addWidget(label_4);

        threshold = new QSlider(centralWidget);
        threshold->setObjectName(QStringLiteral("threshold"));
        threshold->setEnabled(true);
        threshold->setFont(font1);
        threshold->setValue(30);
        threshold->setSliderPosition(30);
        threshold->setOrientation(Qt::Horizontal);

        horizontalLayout_12->addWidget(threshold);

        threshold_label = new QLabel(centralWidget);
        threshold_label->setObjectName(QStringLiteral("threshold_label"));
        threshold_label->setMinimumSize(QSize(50, 0));
        threshold_label->setFont(font2);
        threshold_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(threshold_label);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(124, 0));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_13->addWidget(label_7);

        dmr_dwt_level = new QSlider(centralWidget);
        dmr_dwt_level->setObjectName(QStringLiteral("dmr_dwt_level"));
        dmr_dwt_level->setFont(font1);
        dmr_dwt_level->setMinimum(1);
        dmr_dwt_level->setMaximum(10);
        dmr_dwt_level->setValue(6);
        dmr_dwt_level->setOrientation(Qt::Horizontal);

        horizontalLayout_13->addWidget(dmr_dwt_level);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(50, 0));
        label_8->setFont(font2);
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(label_8);


        verticalLayout_2->addLayout(horizontalLayout_13);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        horizontalLayout_8->addWidget(progressBar);

        start = new QPushButton(centralWidget);
        start->setObjectName(QStringLiteral("start"));
        start->setEnabled(false);
        start->setMinimumSize(QSize(0, 0));
        start->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_8->addWidget(start);

        stop = new QPushButton(centralWidget);
        stop->setObjectName(QStringLiteral("stop"));
        stop->setEnabled(false);
        stop->setMinimumSize(QSize(0, 0));
        stop->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_8->addWidget(stop);


        verticalLayout_2->addLayout(horizontalLayout_8);


        verticalLayout_6->addLayout(verticalLayout_2);

        HPG_Dhunter->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HPG_Dhunter);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 550, 22));
        HPG_Dhunter->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HPG_Dhunter);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        HPG_Dhunter->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(HPG_Dhunter);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        HPG_Dhunter->setStatusBar(statusBar);

        retranslateUi(HPG_Dhunter);
        QObject::connect(dmr_dwt_level, SIGNAL(valueChanged(int)), label_8, SLOT(setNum(int)));
        QObject::connect(min_CpG_x_region, SIGNAL(valueChanged(int)), label_11, SLOT(setNum(int)));
        QObject::connect(min_covSamples_x_region, SIGNAL(valueChanged(int)), label_10, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(HPG_Dhunter);
    } // setupUi

    void retranslateUi(QMainWindow *HPG_Dhunter)
    {
        HPG_Dhunter->setWindowTitle(QApplication::translate("HPG_Dhunter", "HPG_Dhunter", Q_NULLPTR));
        label_5->setText(QApplication::translate("HPG_Dhunter", "select the reference genome:", Q_NULLPTR));
        genome_reference->clear();
        genome_reference->insertItems(0, QStringList()
         << QApplication::translate("HPG_Dhunter", "none of the list", Q_NULLPTR)
         << QApplication::translate("HPG_Dhunter", "homo sapiens GRCh.37.68", Q_NULLPTR)
        );
        case_file->setText(QApplication::translate("HPG_Dhunter", "select\n"
"case folder", Q_NULLPTR));
        delete_case->setText(QApplication::translate("HPG_Dhunter", "delete folder", Q_NULLPTR));
        up_case->setText(QApplication::translate("HPG_Dhunter", "up", Q_NULLPTR));
        down_case->setText(QApplication::translate("HPG_Dhunter", "down", Q_NULLPTR));
        control_file->setText(QApplication::translate("HPG_Dhunter", "select\n"
"control folder", Q_NULLPTR));
        delete_control->setText(QApplication::translate("HPG_Dhunter", "delete folder", Q_NULLPTR));
        up_control->setText(QApplication::translate("HPG_Dhunter", "up", Q_NULLPTR));
        down_control->setText(QApplication::translate("HPG_Dhunter", "down", Q_NULLPTR));
        out_path->setText(QApplication::translate("HPG_Dhunter", "output path", Q_NULLPTR));
        label_3->setText(QApplication::translate("HPG_Dhunter", "DMR identification by:", Q_NULLPTR));
        grouped_samples->setText(QApplication::translate("HPG_Dhunter", "grouped samples", Q_NULLPTR));
        single_samples->setText(QApplication::translate("HPG_Dhunter", "single samples", Q_NULLPTR));
        mC->setText(QApplication::translate("HPG_Dhunter", "5mC", Q_NULLPTR));
        hmC->setText(QApplication::translate("HPG_Dhunter", "5hmC", Q_NULLPTR));
        forward->setText(QApplication::translate("HPG_Dhunter", "forward", Q_NULLPTR));
        reverse->setText(QApplication::translate("HPG_Dhunter", "reverse", Q_NULLPTR));
        all_chroms->setText(QApplication::translate("HPG_Dhunter", "all chrms", Q_NULLPTR));
        selected_chrms->setText(QApplication::translate("HPG_Dhunter", "selected chrms", Q_NULLPTR));
        chromosomes_list->setPlaceholderText(QApplication::translate("HPG_Dhunter", "numbers separated by spaces", Q_NULLPTR));
        label_9->setText(QApplication::translate("HPG_Dhunter", "mC min. coverage", Q_NULLPTR));
        mC_min_cov->setInputMask(QApplication::translate("HPG_Dhunter", "999", Q_NULLPTR));
        mC_min_cov->setText(QApplication::translate("HPG_Dhunter", "100", Q_NULLPTR));
        label->setText(QApplication::translate("HPG_Dhunter", "hmC min. coverage", Q_NULLPTR));
        hmC_min_cov->setInputMask(QApplication::translate("HPG_Dhunter", "999", Q_NULLPTR));
        hmC_min_cov->setText(QApplication::translate("HPG_Dhunter", "100", Q_NULLPTR));
        label_2->setText(QApplication::translate("HPG_Dhunter", "min. #Samples w/cov", Q_NULLPTR));
        label_10->setText(QApplication::translate("HPG_Dhunter", "50", Q_NULLPTR));
        label_13->setText(QApplication::translate("HPG_Dhunter", "%", Q_NULLPTR));
        label_6->setText(QApplication::translate("HPG_Dhunter", "min. #CpG/region", Q_NULLPTR));
        label_11->setText(QApplication::translate("HPG_Dhunter", "7", Q_NULLPTR));
        label_12->setText(QApplication::translate("HPG_Dhunter", "%", Q_NULLPTR));
        label_4->setText(QApplication::translate("HPG_Dhunter", "DMR threshold", Q_NULLPTR));
        threshold_label->setText(QApplication::translate("HPG_Dhunter", "0.3", Q_NULLPTR));
        label_7->setText(QApplication::translate("HPG_Dhunter", "DMR DWT level", Q_NULLPTR));
        label_8->setText(QApplication::translate("HPG_Dhunter", "6", Q_NULLPTR));
        start->setText(QApplication::translate("HPG_Dhunter", "START", Q_NULLPTR));
        stop->setText(QApplication::translate("HPG_Dhunter", "STOP", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HPG_Dhunter: public Ui_HPG_Dhunter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HPG_DHUNTER_H
