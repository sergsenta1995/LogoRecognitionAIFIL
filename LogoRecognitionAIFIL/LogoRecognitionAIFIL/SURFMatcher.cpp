#include "SURFMatcher.h"

SURFMatcher::SURFMatcher(Mat imagePattern_, Mat imageScene_) :
	IMatcher(imagePattern_, imageScene_)
	
{
	m_matchingThresholdValue = 1500;
	m_detector = new SurfFeatureDetector();
}


SURFMatcher::~SURFMatcher()
{	
}


void SURFMatcher::DetectKeyPoints()
{
	m_detector->detect(m_imagePattern, m_keypointsImagePattern);
	m_detector->detect(m_imageScene, m_keypointsImageScene);
}
