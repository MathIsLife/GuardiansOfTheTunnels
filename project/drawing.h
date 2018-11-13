void showHowToPlay() {
  char path[100];
  sprintf(path, "pictures/rules/%02d.bmp", howToPlayPage);
  iShowBMP(0, 0, path);

  iSetColor(255, 255, 255);
  iText(80, 7, "Click on the left side for previous page, right side for next page.", GLUT_BITMAP_HELVETICA_12);
}

